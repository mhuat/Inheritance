/*
	Author: Miguel Hernandez-Ortiz
	Date: November 29, 2017
*/




#include "Header.h"


//setting initial values so that the program can read how many of those objects I have
int Mythic::mythicCounter = 0;
int Dragon::dragonCounter = 0;
int Demon::demonCounter = 0;
int Zombie::zombieCounter = 0;


int main()
{
	int caseChoice = 1;
	bool loop = true;
	do
	{
		cout << "**create a menu**" << endl;
		cin >> caseChoice;
		switch (caseChoice)
		{
		case 1:
		{
			//Create a Mythical Being of your choosing.
			//1.  Dragon
			//2.  Demon
			//3.  Zombie

			//After choosing what to create, specify member values by user input.
			

			break;
		}
		case 2:
		{
			//Display mythical beings.

			break;
		}
		case 3:
		{
			//Delete mythical beings.
			break;
		}
		case 4:
		{
			//Display special ASCII_Tokens for each type of being.
			//Bid farewell to the user.
			//properly exit the program.
			break;
		}
		default:
		{
			cout << endl << "Please input a valid menu option" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	} while (caseChoice == true);
	return 0;
}


