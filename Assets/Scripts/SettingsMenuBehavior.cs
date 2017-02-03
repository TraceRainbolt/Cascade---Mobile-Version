using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsMenuBehavior : MonoBehaviour {

	public ScoreSaverBehavior save;
	public Toggle musicbut;
	public Toggle soundbut;

	// Use this for initialization
	void Start () {
		save = GameObject.FindGameObjectWithTag ("ScoreSaver").GetComponent<ScoreSaverBehavior> ();
		musicbut.isOn = save.playMusic;
		soundbut.isOn = save.playSoundEffects;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ToggleMusic(){
		if (save.playMusic != musicbut.isOn) {
			save.playMusic = !save.playMusic;

			if (save.playMusic) {
				PlayerPrefs.SetString ("music", "on");
			} else {
				PlayerPrefs.SetString ("music", "off");
			}


			//print ("Music Toggled!");
		}
	}

	public void ToggleSoundEffects(){
		if (save.playSoundEffects != soundbut.isOn) {
			save.playSoundEffects = !save.playSoundEffects;

			if (save.playSoundEffects) {
				PlayerPrefs.SetString ("soundeffects", "on");
			} else {
				PlayerPrefs.SetString ("soundeffects", "off");
			}

			//print ("Sound Effects Toggled!");
		}
	}

	public void GoToStartMenu(){
		SceneManager.LoadScene(0, LoadSceneMode.Single);
	}
}
