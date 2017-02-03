using UnityEngine;
using System.Collections;

public class SoundManager : MonoBehaviour {

	public AudioClip counterSound;
	public AudioClip popSound;
	public AudioClip flipSound;
	public AudioClip bigPopSound;
	public AudioClip comboSound;
	public AudioClip multSound;
	public AudioClip cheerSound;
	public AudioClip timerSound;

	public bool playMusic = true;

	public AudioSource sourcePop;
	public AudioSource sourceCounterDing;
	public AudioSource sourceFlip;
	public AudioSource sourceAdrenaline;
	public AudioSource sourceBigPop;
	public AudioSource sourceCombo;
	public AudioSource sourceMult;
	public AudioSource sourceCheer;

	public ScoreSaverBehavior info;

	void Start () {

		info = GameObject.FindGameObjectWithTag ("ScoreSaver").GetComponent<ScoreSaverBehavior>();

		if(info != null && playMusic && info.playMusic) {
			sourceAdrenaline = GameObject.FindGameObjectWithTag("ScoreSaver").GetComponents<AudioSource>()[0];
			sourceAdrenaline.volume = 1f;
			sourceAdrenaline.Play();

		}


	}

	private int cheerCooldown = 100;
	private int beepCooldown = 0;

	void FixedUpdate () {

		if (info == null) {
			info = GameObject.FindGameObjectWithTag ("ScoreSaver").GetComponent<ScoreSaverBehavior>();

			if(info != null && playMusic && info.playMusic) {
				sourceAdrenaline = GameObject.FindGameObjectWithTag("ScoreSaver").GetComponents<AudioSource>()[0];
				sourceAdrenaline.volume = 1f;
				sourceAdrenaline.Play();

			}

		}
		else if (info.playSoundEffects) {
			if (cheerCooldown > 0) {
				cheerCooldown--;
			}
			if (beepCooldown > 0) {
				beepCooldown--;
			}
		}
	}

	public void PlayCheer(){

		if(cheerCooldown == 0 && info.playSoundEffects) {
			sourceCheer.PlayOneShot(cheerSound, .75f);
			cheerCooldown = 100;
		}


	}

	public void PlayBeep(){

		if(beepCooldown == 0 && info.playSoundEffects) {
			sourceCheer.PlayOneShot(timerSound, .05f*(12-GameObject.FindGameObjectWithTag("Timer").GetComponent<TimerController>().timeLeft));
			beepCooldown = 59;
		}


	}

	public void PlayMultiplier(int mult){
		if (info.playSoundEffects) {
			float newVol = .1f * mult;

			if (newVol > 1f) {
				newVol = 1f;
			}

			sourceMult.PlayOneShot (multSound, newVol);
		}
	}

	public void PlayCombo(){
		if (info.playSoundEffects) {
			sourceCombo.pitch = 1f;
			sourceCombo.PlayOneShot (comboSound, .8f);
		}
	}

	public void PlayBigPop(){
		if (info.playSoundEffects) {
			sourceBigPop.pitch = 1f;
			sourceBigPop.PlayOneShot (bigPopSound, .5f);
		}
	}

	public void PlayScoreUp(){
		if (info.playSoundEffects) {
			sourceCounterDing.pitch = 2f;
			sourceCounterDing.PlayOneShot (counterSound, .2f);
		}
	}

	public void SetScoreUpPitch(float num){
		if (info.playSoundEffects) {
			sourceCounterDing.pitch = num;
		}
	}

	public void PlayFlip(float radius){
		if (info.playSoundEffects) {
			sourceFlip.pitch = 1f;
			sourceFlip.PlayOneShot (flipSound, .15f);
		}
	}

	public void PlayPop(float radius){
		if (info.playSoundEffects) {
			float newPitch = 100 / radius - 1;

			if (newPitch < .1f) {
				newPitch = .1f;
			} else if (newPitch > 2f) {
				newPitch = 2f;
			}

			sourcePop.pitch = newPitch;
			sourcePop.PlayOneShot (popSound, 1f);
		}
	}
}
