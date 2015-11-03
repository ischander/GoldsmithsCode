using UnityEngine;
using System.Collections;

public class BallSpawner : MonoBehaviour {

    public GameObject ball;
    bool spawnBalls = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.GetKeyDown(KeyCode.E))
        {
            Instantiate(ball, transform.position, transform.rotation);
        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            spawnBalls = !spawnBalls;
            StartCoroutine(Spawn());
        }
	}

    IEnumerator Spawn()
    {
        while (spawnBalls)
        {
            Instantiate(ball, transform.position, transform.rotation);
            yield return new WaitForSeconds(1.0f);
        }

        yield return null;
    }
}
