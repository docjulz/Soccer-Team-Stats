#include "Team.h"

#include<string>
#include <iostream>
#include <iomanip>
using namespace std;


void Team::gamesPlayed()
{
	mGames = 8;
	mTeamName;
	cout << mTeamName << " have played " << mGames << " games." << endl;
	
}

void Team::assignJersey()
{
	string color;
	cout << "Assign jersey for team (Red, Green, or Blue): ";
	cin >> color;
	if (color != "Red" || color != "Green" || color != "Blue")
	{
		cout << "Select a color Red, Green or Blue only: ";
		cin >> color;

	}
	cout << "Your team jersey color is now " << color << endl;

	mJersey = color;
}

void Team::assignPlayer()
{
	string team, name;
	mTeamName;
	mPlayer = "Tim";

	cout << "Currently " << mPlayer << " is on team " << mTeamName << endl;
	cout << "What team do you want to switch " << mPlayer << " to? ";
	cin >> team;

	cout << mPlayer << " is now on team " << team << endl;
	
}