using UnityEngine;
using System.Collections;

public class MouseBehavior : MonoBehaviour {

	public GameObject ring;

	private bool done = false;

	public void GameOver(){
		done = true;
	}

	void Update () {
		if(Input.GetButtonDown("Fire1") && done == false) {


			Vector3 inM = Input.mousePosition;
			Vector3 inMod = new Vector3(inM.x, inM.y, 1f);
			GameObject ring = (GameObject) Instantiate(this.ring, Camera.main.ScreenToWorldPoint(inMod), Quaternion.identity);
			ring.GetComponent<WaveBehavior>().maxSize = .05f;
			ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
			ring.GetComponent<WaveBehavior>().expansionSpeed = .005f;
			ring.GetComponent<WaveBehavior>().SetColor(Color.white);
		}
	}
}
