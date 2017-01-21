using UnityEngine;
using System.Collections;

public class WaveBehavior : MonoBehaviour {

	public float expansionSpeed;
	public float maxSize;
	public float ringWidth;
	//public Color color;
	public GameObject myBubble;

	private CircleCollider2D outerRingCollider;//, innerRingCollider;
	private SpriteRenderer sprite;
	public Color color;
	private float sizeDiff;

	void Start () {
		
		sprite = GetComponentInChildren<SpriteRenderer>();
		sprite.color = color;
		//sprite.transform.localScale = new Vector3(.08f, .08f, 0);
		outerRingCollider = gameObject.AddComponent<CircleCollider2D>() as CircleCollider2D;
		//innerRingCollider = gameObject.AddComponent<CircleCollider2D>() as CircleCollider2D;

		outerRingCollider.radius = 3.75f;
		//innerRingCollider.radius = 3.575f;

		transform.localScale = new Vector3(0f, 0f, 0f);


	}

	public void SetColor(Color color){

		this.color = color;

	}

	void Update () {
		if(transform.localScale.x < maxSize) {
			transform.localScale += new Vector3(expansionSpeed, expansionSpeed, 0f);
			sprite.color = new Color(sprite.color.r, sprite.color.g, sprite.color.b, 1-(transform.localScale.x / maxSize));
		}
		else {
			KillRing();
		}
	}
		

	void KillRing(){
		Destroy(gameObject);
	}
}
