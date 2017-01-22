using UnityEngine;
using System.Collections;

public class StartMenuController : MonoBehaviour {

	void Start(){
        GetComponent<Camera>().cullingMask = 1;
	}

	// Update is called once per frame
	void Update () {

    }
}
