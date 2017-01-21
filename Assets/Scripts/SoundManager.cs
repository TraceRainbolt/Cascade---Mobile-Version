using UnityEngine;
using System.Collections;

public class SoundManager : MonoBehaviour {

	public AudioClip counterSound;
	public AudioClip popSound;
	public AudioClip flipSound;

	public AudioSource sourcePop;
	public AudioSource sourceCounterDing;
	public AudioSource sourceFlip;

	void Start () {
		
	}
	

	void Update () {
	
	}

	public void PlayScoreUp(){
		sourceCounterDing.pitch = 2f;
		sourceCounterDing.PlayOneShot(counterSound, .2f);
	}

	public void SetScoreUpPitch(float num){
		sourceCounterDing.pitch = num;
	}

	public void PlayFlip(float radius){

		sourceFlip.pitch = 1f;
		sourceFlip.PlayOneShot(flipSound, .15f);
	}

	public void PlayPop(float radius){
		float newPitch = 100 / radius - 1;

		if(newPitch < .1f) {
			newPitch = .1f;
		}
		else if(newPitch > 2f) {
			newPitch = 2f;
		}

		sourcePop.pitch = newPitch;
		sourcePop.PlayOneShot(popSound, 1f);

	}
}
