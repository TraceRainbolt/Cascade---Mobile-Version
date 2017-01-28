﻿using UnityEngine;
using System.Collections;

public class InitialSetup : MonoBehaviour {

    public GameObject bubble;
    public Sprite redSprite;
    public Sprite orangeSprite;
    public Sprite yellowSprite;
    public Sprite greenSprite;
    public Sprite blueSprite;
    public Sprite magentaSprite;

    private Color[] possibleColors;
    private Sprite[] possibleSprites;

	private int bubblesLeft = -1;


	void Start(){
	    createBubbles();

		Color red = new Color(.9f, 0f, .2f);
		Color orange = new Color(.9f, .6f, 0f);
		Color yellow = new Color(.9f, .9f, 0f);
		Color green = new Color(0f, .9f, .7f);
		Color blue = new Color(0f, .2f, .9f);
		Color magenta = new Color(.9f, 0f, .9f);

		possibleColors = new Color[]{red, orange, yellow, green, blue, magenta};
		possibleSprites = new Sprite[]{redSprite, orangeSprite, yellowSprite, greenSprite, blueSprite, magentaSprite};
	}

	void StartGen(){
		if(bubblesLeft > 0){
			bubblesLeft -= 6;
			for(int i = 0; i < 3; i++){
				float randomRadius = Random.Range(0.1f, 1)/40;
				float randomX = Random.Range(-3f, 3f);
				float randomY = Random.Range(-5f, 5f);
				int randIndex = Random.Range(0, 6);

				GameObject temp = (GameObject) Instantiate(bubble, Vector3.zero, Quaternion.identity);
				temp.transform.position = new Vector3(randomX, randomY, 0f);
				temp.transform.localScale = new Vector3(randomRadius*2, randomRadius*2, 0f);
				temp.GetComponent<SpriteRenderer>().sprite = possibleSprites[randIndex];
				temp.GetComponent<BubbleBehavior>().SetColor(possibleColors[randIndex]);
				temp.GetComponent<BubbleBehavior>().SetSprite(possibleSprites[randIndex]);
				temp.GetComponent<BubbleBehavior>().SetRadius(randomRadius); //Lol
				temp.GetComponent<BubbleBehavior>().history = "Original"; //Lol
			}
		}
	}

	void createBubbles(){
		bubblesLeft = 200 + (int) Random.value*10;
	}

	public void SpawnBubble(float radius, Sprite sp, Color color, Vector3 pos){
	    int numberOfBubbles = Random.Range(1, (int) (radius*100) + 1);
		float sizeMultiplier = 1f;

		if(radius > .1f) {
			numberOfBubbles = 5;
			sizeMultiplier = 1.1f;
		}
		if(radius > .2f) {
			numberOfBubbles = 10;
			sizeMultiplier = 1.8f;
		}

        for(int i = 0; i <= numberOfBubbles; i++){
            float randomRadius = Random.Range(0.1f, 1)/40 * sizeMultiplier;
            int randIndex = Random.Range(0, 6);

            GameObject temp = (GameObject) Instantiate(bubble, pos, Quaternion.identity);
            temp.transform.localScale = new Vector3(randomRadius*2, randomRadius*2, 0f);

            temp.GetComponent<BubbleBehavior>().SetColor( possibleColors[randIndex]);
            temp.GetComponent<BubbleBehavior>().SetSprite(possibleSprites[randIndex]);
            temp.GetComponent<BubbleBehavior>().SetRadius(randomRadius);
            temp.GetComponent<BubbleBehavior>().immunityDelay = 100;
            temp.GetComponent<BubbleBehavior>().history = "Spawned from SpawnBubble"; //Lol
            temp.GetComponent<Rigidbody2D>().AddForce(new Vector3(Random.Range(-2f, 2f)*100*sizeMultiplier, Random.Range(-2f, 2f)*100*sizeMultiplier, 0));
        }
    }
    public void SpawnBubble(float radius, Sprite sp, Color color, Vector3 pos, int numberOfBubbles){
        float sizeMultiplier = 1f;

        for(int i = 0; i <= numberOfBubbles; i++){
            float randomRadius = Random.Range(0.1f, 1)/40 * sizeMultiplier;
            int randIndex = Random.Range(0, 6);

            GameObject temp = (GameObject) Instantiate(bubble, pos, Quaternion.identity);
            temp.transform.localScale = new Vector3(randomRadius*2, randomRadius*2, 0f);

            temp.GetComponent<BubbleBehavior>().SetColor( possibleColors[randIndex]);
            temp.GetComponent<BubbleBehavior>().SetSprite(possibleSprites[randIndex]);
            temp.GetComponent<BubbleBehavior>().SetRadius(randomRadius);
            temp.GetComponent<BubbleBehavior>().immunityDelay = 100;
            temp.GetComponent<BubbleBehavior>().history = "Spawned from SpawnBubble"; //Lol
            temp.GetComponent<Rigidbody2D>().AddForce(new Vector3(Random.Range(-2f, 2f)*100*sizeMultiplier, Random.Range(-2f, 2f)*100*sizeMultiplier, 0));
        }
    }
	public Color[] getColorArray(){
	    return possibleColors;
	}

	public Sprite[] getSpriteArray(){
    	return possibleSprites;
    }

	void FixedUpdate(){
		StartGen();
	}
}
