using UnityEngine;
using System.Collections;

public class ComboTextBehavior : MonoBehaviour {

    public GameObject background;

	// Use this for initialization
	void Start () {
	    if(GameObject.FindGameObjectsWithTag("ComboText").Length > 1){
	        Destroy(gameObject);
	    } else {
	        Camera.main.GetComponent<CameraShakeBehavior>().ShakeCamera(.4f);
			Camera.main.GetComponent<SoundManager>().PlayCombo();
	    }
	    transform.localScale = Vector3.zero;
	    Destroy(gameObject, 2);
	}
	
	// Update is called once per frame
	void FixedUpdate () {
	    float currH;
	    float currS;
	    float currV;
	    Color.RGBToHSV(background.GetComponent<SpriteRenderer>().color, out currH, out currS, out currV);
	    background.GetComponent<SpriteRenderer>().color = Color.HSVToRGB(currH + 0.006f, currS, currV);
	    if(transform.localScale.x <= .9){
	        transform.localScale += new Vector3(.05f, .05f, 0);
	    }
	}
}
