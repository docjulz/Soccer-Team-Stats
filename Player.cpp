#include "Player.h"
#include <iostream>
#include <iomanip>
using namespace std;


void Player::getStats()
{
	mName = "Julian";
	mAge = 39;
	mGender = 'M';
	mGoals = 3;
	mAssists = 5;
	mCards = 3;
	cout << "Player name: " << mName << endl;
	cout << "Age: " << mAge << endl;
	cout << "Gender: " << mGender << endl;
	cout << "Goals: " << mGoals << endl;
	cout << "Assists: " << mAssists << endl;
	cout << "Cards recieved: " << mCards << endl;
}
