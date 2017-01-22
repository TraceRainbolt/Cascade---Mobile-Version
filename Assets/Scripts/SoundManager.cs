using UnityEngine;
using System.Collections;

public class SoundManager : MonoBehaviour {

	public AudioClip counterSound;
	public AudioClip popSound;
	public AudioClip flipSound;
	public AudioClip bigPopSound;
	public AudioClip comboSound;
	public AudioClip multSound;


	public AudioSource sourcePop;
	public AudioSource sourceCounterDing;
	public AudioSource sourceFlip;
	public AudioSource sourceAdrenaline;
	public AudioSource sourceBigPop;
	public AudioSource sourceCombo;
	public AudioSource sourceMult;

	void Start () {
        sourceAdrenaline.Play();
        sourceAdrenaline.loop = true;
	}
	

	void Update () {
	
	}

	public void PlayMultiplier(int mult){
		float newVol = .1f * mult;

		if(newVol > 1f) {
			newVol = 1f;
		}

		sourceMult.PlayOneShot(multSound, newVol);
	}

	public void PlayCombo(){
		sourceCombo.pitch = 1f;
		sourceCombo.PlayOneShot(comboSound, .8f);
	}

	public void PlayBigPop(){
		sourceBigPop.pitch = 1f;
		sourceBigPop.PlayOneShot(bigPopSound, .5f);
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
