using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class GameOverBehavior : MonoBehaviour {

	public GameObject wave;
	public Text text;
	public InputField name;

	private int score;
	public static string defaultName = "Enter Name";

	// Use this for initialization
	void Start () {
	    score = GameObject.FindGameObjectWithTag("ScoreSaver").GetComponent<ScoreSaverBehavior>().finalScore;
		text.text = score + "";
		name.text = defaultName;
		FadeIn();
	}
	
	// Update is called once per frame
	void Update () {
		if(Random.Range(0, 75) == 0) {
			GameObject ring = (GameObject) Instantiate(wave, new Vector3(Random.Range(-3,3),Random.Range(-3,3),0), Quaternion.identity);
			ring.GetComponent<WaveBehavior>().maxSize = Random.Range(.3f,4);
			ring.GetComponent<WaveBehavior>().ringWidth = .00001f;
			ring.GetComponent<WaveBehavior>().expansionSpeed = .001f*Random.Range(1,8);
			ring.GetComponent<WaveBehavior>().SetColor(new Color(Random.Range(0f,1f),Random.Range(0f,1f),Random.Range(0f,1f), .1f));
			ring.GetComponent<WaveBehavior>().shake = false;
		}

		if(Input.GetButtonDown("Fire1") && name.text != "Enter Name") {
		    defaultName = name.text;
		    Camera.main.GetComponent<HSController>().SendScore(name.text, score);
            StartCoroutine(FadeOut());
		}
	}

    void FadeIn(){
        float fadeTime = GetComponent<Fading>().BeginFade(-1);
    }

    IEnumerator FadeOut(){
        float fadeTime = Camera.main.GetComponent<Fading>().BeginFade(1);
        yield return new WaitForSeconds(fadeTime);
        SceneManager.LoadScene(0, LoadSceneMode.Single);
    }

}
