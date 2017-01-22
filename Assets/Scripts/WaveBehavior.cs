using UnityEngine;
using System.Collections;

public class WaveBehavior : MonoBehaviour {

	public static int numWaves;

	public float expansionSpeed;
	public float maxSize;
	public float ringWidth;
	public GameObject myBubble;
	public Color color;
	public PhysicsMaterial2D wavePhysics;
	public Vector3 origin;
	public int comboCounter = 0;
	public GameObject displayMult;

	private CircleCollider2D outerRingCollider;
	private SpriteRenderer sprite;
	private float sizeDiff;
	private CameraShakeBehavior camShake;

	void Start () {
	    GetComponent<ParticleSystem>().Play();
	    GetComponent<ParticleSystem>().startColor = color;
		numWaves++;
		sprite = GetComponentInChildren<SpriteRenderer>();
		sprite.color = color;
		origin = transform.position;

		outerRingCollider = gameObject.AddComponent<CircleCollider2D>() as CircleCollider2D;
		outerRingCollider.radius = 3.75f;
		outerRingCollider.sharedMaterial = wavePhysics;
		outerRingCollider.isTrigger = true;
		transform.localScale = new Vector3(0f, 0f, 0f);

		camShake = Camera.main.GetComponent<CameraShakeBehavior>();
		GameObject displayed = (GameObject) Instantiate(displayMult, transform.position, Quaternion.identity);
		displayed.GetComponent<ComboBehavior>().SetMultiplier(comboCounter - 1);

	}

	public void SetColor(Color color){
		this.color = color;
	}

	void FixedUpdate () {

		if(maxSize > 3 && transform.localScale.x*2.4 < maxSize) {
			camShake.ShakeCamera(.2f);
		} else if(maxSize > 2 && transform.localScale.x*2.4 < maxSize) {
			camShake.ShakeCamera(.1f);
		}else if(maxSize > 1.4 && transform.localScale.x*2.4 < maxSize) {
			camShake.ShakeCamera(.05f);
		}

		if(transform.localScale.x < maxSize) {
			transform.localScale += new Vector3(expansionSpeed, expansionSpeed, 0f);
			sprite.color = new Color(sprite.color.r, sprite.color.g, sprite.color.b, 1-(transform.localScale.x / maxSize));
		}
		else {
			KillRing();
		}
	}

	/*void OnCollisionEnter2D(Collision2D other){
	    if(other.gameObject.tag == "Bubble"){
	            ContactPoint2D point = other.contacts[0];
	    	    //other.gameObject.GetComponent<Rigidbody2D>().AddForce(-point.normal * 50);

	    }
	}*/

	void KillRing(){
		numWaves--;
		Destroy(gameObject);
	}
}
