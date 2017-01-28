using UnityEngine;
using System.Collections;

public class BackgroundOverlay : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	    transform.position += new Vector3(.07f, 0, 0);
	    if(transform.position.x > 20){
	        transform.position = new Vector3(-20, 0, 0);
	    }
	}
}
