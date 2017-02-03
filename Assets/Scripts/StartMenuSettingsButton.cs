using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartMenuSettingsButton : MonoBehaviour {

	public GameObject scoresaver;

	// Use this for initialization
	void Start () {
		if (GameObject.FindGameObjectWithTag ("ScoreSaver") == null) {
			GameObject obj = Instantiate (scoresaver, Vector3.zero, Quaternion.identity);
			obj.GetComponent<ScoreSaverBehavior> ().playMusic = true;
			obj.GetComponent<ScoreSaverBehavior> ().playSoundEffects = true;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void GoToSettings(){
		SceneManager.LoadScene(3, LoadSceneMode.Single);
	}
}
