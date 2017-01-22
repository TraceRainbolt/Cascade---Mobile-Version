using UnityEngine;
using System.Collections;

public class ComboBehavior : MonoBehaviour {

    public const int MAX_COMBO = 11;
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
	        Instantiate(comboText, new Vector3(0, 0.4f, 0), Quaternion.identity);
        }if(mult > MAX_COMBO){
            mult = MAX_COMBO;
        }
	    transform.localScale = new Vector3(.06f*mult, .06f*mult, 0);
        GetComponent<SpriteRenderer>().sprite = sprites[mult];
		this.mult = mult;
	}
}
