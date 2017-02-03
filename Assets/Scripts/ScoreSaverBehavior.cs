using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ScoreSaverBehavior : MonoBehaviour {
	
	public int finalScore;

	public bool playSoundEffects;
	public bool playMusic;

	void Awake(){



		DontDestroyOnLoad(this);


		print ("Score Saver Initialized");
	}

	// Use this for initialization
	void Start () {



		finalScore = 0;
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown("escape")) {
			Application.Quit();
		}
	}

	public void GoToSettings(){
		SceneManager.LoadScene(3, LoadSceneMode.Single);
	}
}
