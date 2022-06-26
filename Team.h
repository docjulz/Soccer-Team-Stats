#pragma once
#include<string>

using namespace std;



class Team
{
	string mTeamName;
	string mJersey;
	int mGames;
	string mPlayer;

public:
	Team()
	{
		mTeamName = "Patriots";
		mJersey = "";
		mGames = 0;
		mPlayer = "";
	}

	void gamesPlayed();
	void assignJersey();
	void assignPlayer();

};

