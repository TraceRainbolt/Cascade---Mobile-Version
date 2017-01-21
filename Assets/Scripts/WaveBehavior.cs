using UnityEngine;
using System.Collections;

public class WaveBehavior : MonoBehaviour {

	public float expansionSpeed;
	public float maxSize;
	public float ringWidth;
	public GameObject myBubble;

	private CircleCollider2D outerRingCollider, innerRingCollider;
	private SpriteRenderer sprite;
	private float sizeDiff;

	void Start () {

		sprite = GetComponentInChildren<SpriteRenderer>();
		sprite.transform.localScale = new Vector3(.08f, .08f, 0);
		outerRingCollider = gameObject.AddComponent<CircleCollider2D>() as CircleCollider2D;
		innerRingCollider = gameObject.AddComponent<CircleCollider2D>() as CircleCollider2D;

		outerRingCollider.radius = ringWidth;
		innerRingCollider.radius = 0f;


	}

	void Update () {
		if(outerRingCollider.radius < maxSize) {
			IncreaseRingSize(expansionSpeed);
			sprite.transform.localScale = new Vector3(sprite.transform.localScale.x + expansionSpeed/(1.15f*Mathf.PI), sprite.transform.localScale.y + expansionSpeed/(1.15f*Mathf.PI), 0);

		}
		else {
			KillRing();
		}
	}



	void IncreaseRingSize(float size){
		outerRingCollider.radius += size;
		innerRingCollider.radius += size;


	}

	void KillRing(){
		Destroy(gameObject);
	}
}
