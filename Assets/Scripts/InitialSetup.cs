using UnityEngine;
using System.Collections;

public class InitialSetup : MonoBehaviour {

    public GameObject bubble;

	void Start(){
	    createBubbles();
	}

	void createBubbles(){
	    int numberOfBubbles = 250 + (int) Random.value*10;
	    for(int i = 0; i <= numberOfBubbles; i++){
            float randomRadius = Random.Range(5, 50);
            float randomX = Random.Range(-8f, 8f);
            float randomY = Random.Range(-5f, 5f);
            int randColorIndex = Random.Range(0, 6);
            Color[] possibleColors = new Color[]{Color.red, Color.yellow, Color.green, Color.blue, Color.cyan, Color.magenta};

	        GameObject temp = (GameObject) Instantiate(bubble, Vector3.zero, Quaternion.identity);
	        temp.transform.position = new Vector3(randomX, randomY, 0f);
            temp.transform.localScale = new Vector3(randomRadius, randomRadius, 0f);
            temp.GetComponent<Renderer>().material.color = possibleColors[randColorIndex];
			temp.GetComponent<BubbleBehavior>().SetColor(possibleColors[randColorIndex]);
			temp.GetComponent<BubbleBehavior>().SetRadius(randomRadius); //Lol
	    }
	}
}
