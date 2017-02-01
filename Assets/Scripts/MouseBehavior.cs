using UnityEngine;
using System.Collections;

public class MouseBehavior : MonoBehaviour {

	public GameObject ring;

	private bool done = false;
	private int delay = 0;

	private int maxTouches = 4;

	public void GameOver(){
		done = true;
		GameObject.FindGameObjectWithTag("ScoreSaver").GetComponent<ScoreSaverBehavior>().finalScore = Camera.main.GetComponent<ScoreManager>().totalScore;
	}

	void Update () {
		if(Input.touchCount > 0 && done == false && delay <= 0) {
		    Touch[] touches = Input.touches;
			int max = Input.touchCount;
			if (max > maxTouches) {
				max = maxTouches;
			}
		    for(int i = 0; i < max; i++){
                Vector3 inM = touches[i].position;
                Vector3 inMod = new Vector3(inM.x, inM.y, 1f);
                GameObject ring = (GameObject) Instantiate(this.ring, Camera.main.ScreenToWorldPoint(inMod), Quaternion.identity);
                ring.GetComponent<WaveBehavior>().maxSize = .05f;
                ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
                ring.GetComponent<WaveBehavior>().expansionSpeed = .005f;
                ring.GetComponent<WaveBehavior>().SetColor(Color.white);
            }
            delay = 2;
		}
		delay--;
	}
}
