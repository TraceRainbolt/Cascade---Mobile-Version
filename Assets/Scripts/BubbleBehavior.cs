using UnityEngine;
using System.Collections;

public class BubbleBehavior : MonoBehaviour {

	public float radius;
	public Color color;
	public GameObject ring;

	private CircleCollider2D collider;

	public void SetColor(Color color){
		this.color = color;

	}

	public void SetRadius(float radius){
		this.radius = radius;

	}

	void Start () {
		
	}
	

	void Update () {
		
	}

	void Pop(){
		print(color);
		GameObject ring = (GameObject)Instantiate(this.ring, transform.position, Quaternion.identity);
		ring.GetComponent<WaveBehavior>().maxSize = radius/120;
		ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
		ring.GetComponent<WaveBehavior>().expansionSpeed = .01f;
		ring.GetComponent<WaveBehavior>().SetColor(color);
		Destroy(gameObject);
	}

	void OnTriggerEnter2D(Collider2D other){
		if(other.CompareTag("Bubble")){
			Destroy(gameObject);
		}else if(other.CompareTag("Wave")){
			if(other.GetComponent<WaveBehavior>().color.Equals(Color.white)) {
				Pop();
			}
			else if(other.GetComponent<WaveBehavior>().color.Equals(color)) {
				Pop();
			}
			else {
				color = other.GetComponent<WaveBehavior>().color;
				GetComponent<Renderer>().material.color = other.GetComponent<WaveBehavior>().color;

			}

		}
	}
		


}
