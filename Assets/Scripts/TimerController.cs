using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class TimerController : MonoBehaviour {

    public float timeLeft = 121;

	public bool gameOver;
	int gameOverDelay = 150;

	// Use this for initialization
	void Start () {
		gameOver = false;
	}
	
	// Update is called once per frame
	void Update () {
	    timeLeft -= Time.deltaTime;
		if(timeLeft >= 0) {
			string minutes = Mathf.Floor(timeLeft / 60).ToString("0");
			string seconds = Mathf.Floor(timeLeft % 60).ToString("00");
			GetComponent<Text>().text = minutes + ":" + seconds;
		}
		else {
			gameOver = true;
			Camera.main.GetComponent<MouseBehavior>().GameOver();
		}
	}



	void GameOver(){
		

		gameOverDelay--;
		Camera.main.GetComponent<SoundManager>().sourceAdrenaline.volume -= .01f;
		if(gameOverDelay <= 0) {
			
			SceneManager.LoadScene(1, LoadSceneMode.Single);
		}

	}

	void FixedUpdate(){

		if(gameOver) {
			GameOver();
		}

	    InitialSetup set = Camera.main.GetComponent<InitialSetup>();
	    if((int) timeLeft % 30 == 1 && GameObject.FindGameObjectsWithTag("Bubble").Length < 400){
            float randomRadius = Random.Range(0.1f, 1)/40;
            float randomX = Random.Range(-2f, 2f);
            float randomY = Random.Range(-2f, 2f);
            int randIndex = Random.Range(0, 6);
            Sprite[] sps = set.getSpriteArray();
            Color[] cs = set.getColorArray();

	        set.SpawnBubble(randomRadius, sps[randIndex], cs[randIndex], new Vector3(randomX, randomY, 0));
	    }
	}
}
