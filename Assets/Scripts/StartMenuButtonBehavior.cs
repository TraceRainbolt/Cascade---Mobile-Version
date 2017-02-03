using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class StartMenuButtonBehavior : MonoBehaviour {

	public GameObject wave;
	public GameObject logo;
    public bool logoFade = false;

    private int time = 0;


    void Start(){
        //rb = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate(){
        transform.RotateAround(Vector3.zero, Vector3.forward, 20*(int) Random.Range(-2, 2)*Time.deltaTime);
        time++;
    }

    void OnTriggerEnter2D(Collider2D other){
		if(other.CompareTag("Wave") && other.GetComponent<WaveBehavior>().color == Color.white && time > 30) {
			other.GetComponent<WaveBehavior>().maxSize = 0;
			Camera.main.GetComponent<ScreenTransitionImageEffect>().isFading = true;
			Pop();
		}
    }

    void Pop(){
		for(int i = 0; i < 3; i++) {
			GameObject ring = (GameObject)Instantiate(wave, transform.position, Quaternion.identity);
			ring.GetComponent<WaveBehavior>().maxSize = 20.5f;
			ring.GetComponent<WaveBehavior>().shake = false;
			ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
			ring.GetComponent<WaveBehavior>().expansionSpeed = .049f - i*.005f;
			ring.GetComponent<WaveBehavior>().SetColor(new Color(0f, .9f, .7f));
			ring.GetComponent<WaveBehavior>().comboCounter = 0;
		}

		if (GameObject.FindGameObjectWithTag ("ScoreSaver").GetComponent<ScoreSaverBehavior> ().playSoundEffects) {
			GameObject.FindGameObjectWithTag ("ScoreSaver").GetComponents<AudioSource> () [1].Play ();
		}
		Camera.main.GetComponent<ScreenTransitionImageEffect>().activated = true;
		Destroy(gameObject);
	}
}
