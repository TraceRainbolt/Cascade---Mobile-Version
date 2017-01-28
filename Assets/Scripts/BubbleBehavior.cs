using UnityEngine;
using Random = UnityEngine.Random;
using System;
using System.Collections;

public class BubbleBehavior : MonoBehaviour {

	public float radius;
	public Color color;
	public GameObject ring;
	public Sprite sp;
	public int immunityDelay = 0;
	public int shrinkDelay = -1;
	public String history = "";
	public GameObject exploder;
	public GameObject imploder;
	public GameObject spawnPar;


    private Vector3 shiftedPoint;
    private int randDir;
	private Camera cam;
	private SoundManager sound;
	private ScoreManager score;
	private CircleCollider2D collider;
	private Rigidbody2D rb;


	public void SetColor(Color color){
		this.color = color;
	}

	public void SetSprite(Sprite sp){
	    GetComponent<SpriteRenderer>().sprite = sp;
    	this.sp = sp;
    }

	void Update(){
		if(Input.GetButtonDown("Fire1")) {
			//immunityDelay = 0;
		}
	}

	public void SetRadius(float radius){
		this.radius = radius;
	}

	void Start () {
		shiftedPoint = new Vector3(transform.position.x + .2f, transform.position.y, 0);
		randDir = Random.Range(-3, 4);
		cam = Camera.main;
		sound = cam.GetComponent<SoundManager>();
		score = cam.GetComponent<ScoreManager>();
		rb = GetComponent<Rigidbody2D>();
		rb.mass = radius*100;

		GameObject exp = (GameObject)Instantiate(spawnPar, transform.position, Quaternion.identity);
		exp.GetComponent<SpawnParticleBehavior>().SetColor(color);

	}

	public static int GetNumBubbles(){
		return GameObject.FindGameObjectsWithTag("Bubble").Length;
	}



	void FixedUpdate () {
	    if(immunityDelay > 0){
	        immunityDelay--;
	    }
		if(shrinkDelay != -1) {
			if(shrinkDelay == 0) {
				Destroy(gameObject);
			}
			else {
				shrinkDelay--;
				transform.localScale /= 1.5f;
			}
		}
		else {
			MakeRandomMovement(shiftedPoint);
		}

	}

	void Pop(int prevCombo){
		GameObject ring = (GameObject)Instantiate(this.ring, transform.position, Quaternion.identity);
		ring.GetComponent<WaveBehavior>().maxSize = radius*12;
		ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
		ring.GetComponent<WaveBehavior>().expansionSpeed = .01f;
		ring.GetComponent<WaveBehavior>().SetColor(color);
        ring.GetComponent<WaveBehavior>().comboCounter = prevCombo + 1;
		if(GetNumBubbles() < 200) {
			SpawnNewBubbles();
		}

		if(radius > .03) {
			GameObject exp = (GameObject)Instantiate(imploder, transform.position, Quaternion.identity);
			exp.GetComponent<ImplodeBehavior>().SetColor(color);
		}

		if(radius > .16f) {
		    Vibration.Vibrate(7);
			sound.PlayBigPop();
		}
		else {
			sound.PlayPop(radius);
		}
		int comboScore = (int) (Mathf.Pow(2, prevCombo)*100*radius);

		score.AddScore(comboScore);

		shrinkDelay = 15;
		immunityDelay = 500;
		Destroy(rb);
		//Destroy(gameObject);
	}

	void SpawnNewBubbles(){
	    if(radius > 0.021f){
            cam.GetComponent<InitialSetup>().SpawnBubble(radius, sp, color, transform.position);
	    }
	}

	void OnTriggerEnter2D(Collider2D other){
		if(other.CompareTag("Wave") && other.GetComponent<WaveBehavior>().color.Equals(Color.white)) {
			other.GetComponent<WaveBehavior>().maxSize = 0;
			if(radius > 65) {
				cam.GetComponent<CameraShakeBehavior>().ShakeCamera(.2f);
			}
			Pop(0);
		}

        if(other.CompareTag("Wave") && immunityDelay == 0){
			if(other.GetComponent<WaveBehavior>().color.Equals(Color.white)) {
				/*if(radius > 65) {
					cam.GetComponent<CameraShakeBehavior>().ShakeCamera(.2f);
				}
				Pop();*/
			}
			else if(other.GetComponent<WaveBehavior>().color.Equals(color)) {
				Pop(other.GetComponent<WaveBehavior>().comboCounter);
			}
			else {
			    Color[] colors = Camera.main.GetComponent<InitialSetup>().getColorArray();
			    Sprite[] sprites = Camera.main.GetComponent<InitialSetup>().getSpriteArray();

				color = other.GetComponent<WaveBehavior>().color;
				int index = Array.IndexOf(colors, color);
				Sprite newSprite = sprites[index];

				GetComponent<SpriteRenderer>().sprite = newSprite;
				sp = newSprite;
				sound.PlayFlip(radius);
				immunityDelay = 100;
                Vector3 push = (transform.position - other.GetComponent<WaveBehavior>().origin).normalized*other.GetComponent<WaveBehavior>().maxSize;
                rb.AddForce(push, ForceMode2D.Impulse);
			}
		}
	}

	void OnTriggerStay2D(Collider2D other){
        if(other.CompareTag("Bubble") && sp == other.GetComponent<BubbleBehavior>().sp && immunityDelay <= 90){
            mergeBubbles(other);
        }
    }

    void MakeRandomMovement(Vector3 point){
        //transform.RotateAround(point, Vector3.forward, randDir * 7 * Time.deltaTime);
        if(Random.Range(0, 40) == 0){
            Vector3 pull = Vector3.zero - transform.position;
            rb.AddForce(pull*.4f);
        }
        if(Random.Range(0, 60) == 0){
            rb.AddForce(new Vector3(Random.Range(-.6f, .6f), Random.Range(-.6f, .6f), 0));
        }
    }

    void mergeBubbles(Collider2D other){
        BubbleBehavior otherBubble = other.GetComponent<BubbleBehavior>();
        Color newColor = otherBubble.color;
        Sprite newSprite = otherBubble.sp;
        float newRadius = 0;
        Vector3 newPosition = otherBubble.transform.position;
        GameObject newBubble = otherBubble.gameObject;
        if(radius > otherBubble.radius){
            newBubble = gameObject;
            newColor = color;
            newSprite = sp;
            newPosition = transform.position;
            newRadius = radius + otherBubble.radius*.1f;
            Destroy(other.gameObject);
        } else {
            newRadius = radius*.1f + otherBubble.radius;
            Destroy(gameObject);
        }
        if(newRadius >= .21) {
            Pop(5);
        }
        newBubble.transform.localScale = new Vector3(newRadius*2, newRadius*2, 0f);
        //newBubble.GetComponent<Renderer>().material.color = newColor;
        newBubble.GetComponent<BubbleBehavior>().SetColor(newColor);
        newBubble.GetComponent<BubbleBehavior>().SetSprite(newSprite);
        newBubble.GetComponent<BubbleBehavior>().SetRadius(newRadius);
        newBubble.GetComponent<BubbleBehavior>().history = "Born from a merge";

		GameObject exp = (GameObject)Instantiate(exploder, newBubble.transform.position, Quaternion.identity);
		exp.GetComponent<ExplosionBehavior>().SetColor(newColor);
    }
}
