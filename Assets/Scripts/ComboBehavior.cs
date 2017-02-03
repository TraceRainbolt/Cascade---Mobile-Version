using UnityEngine;
using System.Collections;

public class ComboBehavior : MonoBehaviour {

    public const int MAX_COMBO = 10;
    public Sprite[] sprites = new Sprite[MAX_COMBO];
    public GameObject comboText;
	private int mult;
	void Start () {
		Camera.main.GetComponent<SoundManager>().PlayMultiplier(mult);
	    Destroy(gameObject, 2);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetMultiplier(int mult){
	    if(mult <= 0 || mult > MAX_COMBO)
	        return;
	    if(mult == 6){
	        GameObject combo = (GameObject) Instantiate(comboText, new Vector3(0, 0.4f, 0), Quaternion.identity);
	        combo.transform.localScale = new Vector3(.6f, .6f, 0);
	        Vibration.Vibrate(6);
        }if(mult >= MAX_COMBO){
            mult = MAX_COMBO;
            Vibration.Vibrate(8);
			Camera.main.GetComponent<SoundManager>().PlayCheer();
        }

		if (mult > 8) { //Clamp the bigger text
			transform.localScale = new Vector3(.041f*mult, .041f*mult, 0);
		}
		else if (mult > 6) { //Clamp the bigger text
			transform.localScale = new Vector3(.045f*mult, .045f*mult, 0);
		} else {
			transform.localScale = new Vector3(.05f*mult, .05f*mult, 0);
		}
	    
        GetComponent<SpriteRenderer>().sprite = sprites[mult];
		this.mult = mult;


		// Move back onscreen

		if (transform.position.x >= 1.6f) {
			transform.position += -1*Vector3.right * (1.6f - mult * .1f);
		}

		if (transform.position.x <= -1.6f) {
			transform.position += Vector3.right * (1.6f - mult * .1f);
		}

		if (transform.position.y >= 4.5f) {
			transform.position += -1*Vector3.up * (4.5f - mult * .1f);
		}

		if (transform.position.y <= -4.5f) {
			transform.position += Vector3.up * (4.5f - mult * .1f);
		}
	}
}
