#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int numChoice;
	char playAgainChoice = ' ';
	bool playAgain = true;

	while (playAgain)
	{
		cout << "Please choose a number between 1 and 10" << endl;
		cin >> numChoice;
		for (int row = 0; row <= numChoice; row++)
		{
			for (int col = 0; col < row; col++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		cout << "Would you like to play again? Enter Y or N (not case sensitive)." << endl;
		cin >> playAgainChoice;
		if (playAgainChoice == 'y' || playAgainChoice == 'Y')
		{
			playAgain = true;
		}
		if (playAgainChoice == 'n' || playAgainChoice == 'N')
		{
			playAgain = false;
			cout << "Goodbye" << endl;
			Sleep(3000);
			return 0;
		}
	}
}