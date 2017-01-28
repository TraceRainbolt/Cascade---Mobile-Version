using UnityEngine;
using System.Collections;

public class ObjectPuller : MonoBehaviour {

     public float pullRadius = 10;
     public float pullForce = 10;

     public void FixedUpdate() {
         foreach (Collider2D collider in Physics2D.OverlapCircleAll(transform.position, pullRadius)) {
            if(collider.GetComponent<Rigidbody>() != null){
                 print("hi");
                 // calculate direction from target to me
                 Vector3 forceDirection = transform.position - collider.transform.position;

                 // apply force on target towards me
                 collider.GetComponent<Rigidbody>().AddForce(forceDirection.normalized * pullForce * Time.fixedDeltaTime);
             }
         }
     }
}
