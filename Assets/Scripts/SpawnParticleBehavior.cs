using UnityEngine;
using System.Collections;

public class SpawnParticleBehavior : MonoBehaviour {

	ParticleSystem sys;
	private Color color;

	public void SetColor(Color color){
		this.color = color;
	}

	// Use this for initialization
	void Start () {
		sys = GetComponent<ParticleSystem>();
		sys.startColor = color;

		sys.Play();
		Destroy(gameObject, 2);

	}

	// Update is called once per frame
	void Update () {

	}
}
