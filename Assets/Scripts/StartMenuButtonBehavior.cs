using UnityEngine;
using System.Collections;

public class StartMenuButtonBehavior : MonoBehaviour {

	public GameObject ring;

    private Rigidbody2D rb;

    void Start(){
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update () {
        if(Random.Range(0, 100) == 0){
            //rb.AddForce(new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f), 0));
        }
    }

    void OnTriggerEnter2D(Collider2D other){
		if(other.CompareTag("Wave")) {
			other.GetComponent<WaveBehavior>().maxSize = 0;
			Pop();
		}
    }

    void Pop(){
		GameObject ring = (GameObject)Instantiate(this.ring, transform.position, Quaternion.identity);
		ring.GetComponent<WaveBehavior>().maxSize = 20.5f;
		ring.GetComponent<WaveBehavior>().shake = false;
		ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
		ring.GetComponent<WaveBehavior>().expansionSpeed = .052f;
		ring.GetComponent<WaveBehavior>().SetColor(new Color(0f, .9f, .7f));
        ring.GetComponent<WaveBehavior>().comboCounter = 0;

	    //SpawnNewBubbles();

		//sound.PlayBigPop();
		Camera.main.GetComponent<ScreenTransitionImageEffect>().activated = true;

		Destroy(gameObject);
	}
}
