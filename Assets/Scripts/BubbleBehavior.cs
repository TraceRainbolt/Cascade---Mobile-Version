using UnityEngine;
using Random = UnityEngine.Random;
using System;
using System.Collections;

public class BubbleBehavior : MonoBehaviour {

	public float radius;
	public Color color;
	public GameObject ring;
	public Sprite sp;

    private Vector3 shiftedPoint;
    private int randDir;
	private Camera cam;
	private SoundManager sound;
	private ScoreManager score;
	private CircleCollider2D collider;

	public void SetColor(Color color){
		this.color = color;
	}

	public void SetSprite(Sprite sp){
    	this.sp = sp;
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
	}
	

	void FixedUpdate () {
	    MakeRandomMovement(shiftedPoint);
	}

	void Pop(){
		
		GameObject ring = (GameObject)Instantiate(this.ring, transform.position, Quaternion.identity);
		ring.GetComponent<WaveBehavior>().maxSize = radius*16;
		ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
		ring.GetComponent<WaveBehavior>().expansionSpeed = .01f;
		ring.GetComponent<WaveBehavior>().SetColor(color);
		sound.PlayPop(radius);
		score.AddScore(3);
		Destroy(gameObject);
	}

	void OnTriggerEnter2D(Collider2D other){
        if(other.CompareTag("Wave")){
			if(other.GetComponent<WaveBehavior>().color.Equals(Color.white)) {
				if(radius > 65) {
					cam.GetComponent<CameraShakeBehavior>().ShakeCamera(.2f);
				}
				Pop();
			}
			else if(other.GetComponent<WaveBehavior>().color.Equals(color)) {
				Pop();
			}
			else {
			    Color[] colors = Camera.main.GetComponent<InitialSetup>().getColorArray();
			    Sprite[] sprites = Camera.main.GetComponent<InitialSetup>().getSpriteArray();

				color = other.GetComponent<WaveBehavior>().color;
				int index = Array.IndexOf(colors, color);
				Sprite newSprite = sprites[index];

				GetComponent<SpriteRenderer>().sprite = newSprite;
				//GetComponent<Renderer>().material.color = other.GetComponent<WaveBehavior>().color;
				sound.PlayFlip(radius);
			}
		}
	}

	void OnTriggerStay2D(Collider2D other){
        if(other.CompareTag("Bubble")){
            mergeBubbles(other);
        }
    }

    void MakeRandomMovement(Vector3 point){
        transform.RotateAround(point, Vector3.forward, randDir * 7 * Time.deltaTime);
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

        newBubble.transform.localScale = new Vector3(newRadius*2, newRadius*2, 0f);
        //newBubble.GetComponent<Renderer>().material.color = newColor;
        newBubble.GetComponent<BubbleBehavior>().SetColor(newColor);
        newBubble.GetComponent<BubbleBehavior>().SetSprite(newSprite);
        newBubble.GetComponent<BubbleBehavior>().SetRadius(newRadius);
    }
}
