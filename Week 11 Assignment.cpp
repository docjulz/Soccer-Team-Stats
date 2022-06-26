//  This program is used by a soccer league to run reports and make changes

#include <iostream>
#include <iomanip>
#include <string>
#include "Player.h"
#include "Team.h"

using namespace std;

int main()
{
	
	Player player1;
	Team team1;
	int choice;

	do
	{
		// displayMenu
		cout << "\n          MENU          \n";
		cout << "1. Select Team\n";
		cout << "2. Jersey Options\n";
		cout << "3. Player Stats\n";
		cout << "4. Games Played\n";
		cout << "5. Exit Program\n";
		cout << "Enter your choice: ";

		// get selection
		cin >> choice;

		switch(choice) {
		
		case 1:
			team1.assignPlayer();	
			break;
		case 2:
			team1.assignJersey();
			break;
		case 3:
			player1.getStats();
			break;
		case 4:
			team1.gamesPlayed();
			break;
		case 5:
			cout << "\nGoodbye\n";
			break;
		default:
			cout << "INVALID SELECTION\n";
		}
	} while (choice != 5);	

	return 0;

}
