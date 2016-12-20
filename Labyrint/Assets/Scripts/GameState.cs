﻿
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public static class GameState
{
	// I modified CurrentLevel to int in order to refer scene numbers 

	public static int CurrentLevel;
	public static string Time = "  ";

	public static float playTime;  // for social dashboard, remember change from secs to hh:mm:ss ! 

	public static void StartChallenge (int levelNumber, string levelReference)
	{
		Debug.Log ("Starting Game Session with parametres");
		Debug.Log ("Level number " + levelNumber + " level reference " + levelReference);
		SceneManager.LoadScene (1);

		/*
		 * 
		 * replace SceneManager.LoadScene (1);  with (levelNumber); ? 
		 * 
		 * */


	}

	public static void UseGift (string rewardName)
	{
		Debug.Log ("Using reward " + rewardName);
		SceneManager.LoadScene (0);
	}
}