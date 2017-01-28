using UnityEngine;
using System.Collections;

public class FadeOutMain : MonoBehaviour {

    public Texture2D fadeTexture;
    public float fadeSpeed = 1.6f;
    public int drawDepth = -1000;

    private float alpha = 0.0f;
    private int fadeDir = -1;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnGUI(){
        alpha -= fadeDir * fadeSpeed * Time.deltaTime;
        alpha = Mathf.Clamp01(alpha);

        GUI.color = new Color(GUI.color.r, GUI.color.g, GUI.color.b, alpha);

        GUI.depth = drawDepth;

        GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), fadeTexture);
    }
}
