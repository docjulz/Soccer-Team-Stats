#pragma once

#include <string>
#include <iomanip>
#include <iostream>


using namespace std;

class Player
{
	string mName;
	int mAge;
	char mGender;
	int mGoals;
	int mAssists;
	int mCards;
	
public:
	Player()
	{
		mName = "";
		mAge = 0;
		mGender = ' ';
		mGoals = 0;
		mAssists = 0;
		mCards = 0;
	}

	void getStats();

	
};

