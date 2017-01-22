using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour {

	public Text text;

	private int delayFrames = 10;
	private int delayCounter = 0;

	private int scoreDisplayed;
	public int totalScore;
	private SoundManager sound;


	void Start () {
		totalScore = 0;
		sound = Camera.main.GetComponent<SoundManager>();

	}
	

	void FixedUpdate () {
		if(scoreDisplayed != totalScore) {
			if(totalScore - scoreDisplayed <= 10) {
				delayFrames = 10;
			}else if(totalScore - scoreDisplayed <= 30) {
				delayFrames = 5;
				scoreDisplayed++;
			}else if(totalScore - scoreDisplayed <= 60) {
				delayFrames = 2;
				scoreDisplayed += 2;
			}else if(totalScore - scoreDisplayed <= 500) {
                delayFrames = 2;
                scoreDisplayed += 100;
            }else if(totalScore - scoreDisplayed <= 1000) {
                 delayFrames = 2;
                 scoreDisplayed += 500;
            } else {
                delayFrames = 2;
                scoreDisplayed += 1000;
            }

			if(delayCounter >= delayFrames) {
				delayCounter = 0;
				scoreDisplayed++;
				text.text = scoreDisplayed + "";
				if(totalScore - scoreDisplayed >= 5) {
					sound.PlayScoreUp();
				}
			}
			else {
				delayCounter++;
			}

		}
	}

	public void AddScore(int score){
		totalScore += score;
	}
}
