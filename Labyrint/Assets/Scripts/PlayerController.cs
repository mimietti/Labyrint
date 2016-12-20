﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI; 
using UnityEngine.SceneManagement; 


public class PlayerController : MonoBehaviour {
	public Text countText; 
	public Text finalText; 
	public float speed; 
	private int count; 
	public int countMax;
	public Text doneText; 
	public VirtualJoystick joystick;	
	private Rigidbody rb; 

	public Text finalTime; 


	public float seconds;
	public float minutes;
	public float milliseconds;

	public GameObject[] GO;


	void Awake () {

		// modifications 

		GameState.CurrentLevel = 1; 
		UnitySocial.StartSession (); 



		count = 0; 
		countMax = 10; 
		SetCountText (); 
		doneText.text ="0"; 
		rb = GetComponent<Rigidbody> (); 
		speed = 10; 
		 

	
	}

	void FixedUpdate ()
	{


			float moveHorizontal = joystick.Horizontal();
			float moveVertical = joystick.Vertical();
			Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical); 
			rb.AddForce (movement * speed);
			SetTimeText (); 


		//For Mac / PC 
		//	float moveHorizontal = Input.GetAxis ("Horizontal");
		//	float moveVertical = Input.GetAxis ("Vertical"); 
		// Vector3 movement = new Vector3 (GetAxisH, 0.0.f, GetAxisV); 
		//GetComponent<Rigidbody>().AddForce (movement * SpeedAc); 



	
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.CompareTag ("Pick Up")) 
		{
			other.gameObject.SetActive (false); 
			count = count + 1; 
			SetCountText ();

			// gate 

		if (count == countMax - 1) 
			{
				DestroyGates(); 
		}



			if (count == countMax) 
			{
				FinishTime (); 
				StopGameSession (); 
			
			} else 			
			{
				speed = speed + 8; 
			}
		}
	}



	void SetCountText()
	{
			countText.text = count.ToString () + " / " + countMax; 
	}


	void SetTimeText()
	{
		doneText.text = Time.timeSinceLevelLoad.ToString ("f2");
		// this would be smarter way to show time in game, but needs re-writing with formatting...maybe later
		// doneText.text = GameState.Time;
	}



	void FinishTime()
	{

		// time for GameState

		minutes = (int)(Time.timeSinceLevelLoad / 60f);
		seconds = (int)(Time.timeSinceLevelLoad % 60f);
		milliseconds = (int)((Time.timeSinceLevelLoad * 1000f) % 1000f);



	//		GameState.Time = string.Format ("{0:00}:{1:00}:{2:000}", minutes, seconds, milliseconds);
	

	//needed for parsing challenge result to Unity Social services; time in milliseconds	
		GameState.playTime = Time.timeSinceLevelLoad * 1000f;

	}



	public void StopGameSession ()
	{
		Debug.Log ("StopGameSession()");
		SceneManager.LoadScene (0);
	}


	void DestroyGates()
	{
		GO = GameObject.FindGameObjectsWithTag ("gate");

		for(var i = 0 ; i < GO.Length ; i ++)
		{
			Destroy(GO[i]);
		}
	}

}