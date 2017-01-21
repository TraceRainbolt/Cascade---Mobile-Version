using UnityEngine;
using System.Collections;

public class InitialSetup : MonoBehaviour {

    public GameObject bubble;

	// Use this for initialization
	void Start(){
	    createBubbles();
	}
	
	// Update is called once per frame
	void Update(){
	
	}

	void createBubbles(){
	    int numberOfBubbles = 150 + (int) Random.value*10;
	    for(int i = 0; i <= numberOfBubbles; i++){
            float randomRadius = Random.Range(5, 100);
            float randomX = Random.Range(-8f, 8f);
            float randomY = Random.Range(-5f, 5f);
            int randColorIndex = Random.Range(0, 5);
            Color[] possibleColors = new Color[]{Color.red, Color.yellow, Color.green, Color.blue, Color.cyan};

	        GameObject temp = (GameObject) Instantiate(bubble, Vector3.zero, Quaternion.identity);
	        temp.transform.position = new Vector3(randomX, randomY, 0f);
            temp.transform.localScale = new Vector3(randomRadius, randomRadius, 0.1f);
            temp.GetComponent<Renderer>().material.color = possibleColors[randColorIndex];
	    }
	}
}
