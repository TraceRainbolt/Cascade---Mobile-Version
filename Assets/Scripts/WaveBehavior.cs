using UnityEngine;
using System.Collections;

public class WaveBehavior : MonoBehaviour {

	public static int numWaves;

	public float expansionSpeed;
	public float maxSize;
	public float ringWidth;
	public GameObject myBubble;
	public Color color;

	private CircleCollider2D outerRingCollider;
	private SpriteRenderer sprite;
	private float sizeDiff;

	void Start () {
		numWaves++;
		sprite = GetComponentInChildren<SpriteRenderer>();
		sprite.color = color;

		outerRingCollider = gameObject.AddComponent<CircleCollider2D>() as CircleCollider2D;
		outerRingCollider.radius = 3.75f;
		transform.localScale = new Vector3(0f, 0f, 0f);
	}

	public void SetColor(Color color){
		this.color = color;
	}

	void FixedUpdate () {
		if(transform.localScale.x < maxSize) {
			transform.localScale += new Vector3(expansionSpeed, expansionSpeed, 0f);
			sprite.color = new Color(sprite.color.r, sprite.color.g, sprite.color.b, 1-(transform.localScale.x / maxSize));
		}
		else {
			KillRing();
		}
	}

	void KillRing(){
		numWaves--;
		Destroy(gameObject);
	}
}
