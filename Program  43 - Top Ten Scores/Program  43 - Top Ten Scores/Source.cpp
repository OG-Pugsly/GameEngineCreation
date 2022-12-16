#include <iostream>
#include <fstream>

using namespace std;

void UpdateDisplay(enum currentState);
void CheckTopTen();
void UpdateScores();

enum menuState
{
	MainMenu,
	InputScore,
	DisplayScore,
	Exit
};

int main()
{
	int userChoice;
	bool CorrectChoice = false;

	ifstream inFile("scores.txt");
	ofstream outFile("scores.txt");


	if (!inFile)
	{
		cerr << "File could not be opened!";
		exit(1);
	}

	while (CorrectChoice == false)
	{
		system("CLS");
		cout << "Please choose an option from below" << endl;
		cout << "1. Enter a score" << endl;
		cout << "2. Display scores" << endl;
		cout << "3. Exit" << endl;
		cin >> userChoice;

		if (userChoice > 0 && userChoice < 4)
		{
			CorrectChoice = true;
		}
		else
		{
			cout << "Invalid choice made" << endl;
			CorrectChoice = false;
		}
	}
	while (CorrectChoice == true)
	{
		string user;
		string score;
		if (userChoice == 1)
		{
			cout << "Please enter a username" << endl;
			cin >> user;
			cout << "Please enter a score" << endl;
			cin >> score;
			outFile << user << "\n";
			outFile << score << "\n";
			outFile.close();
			return 0;
		}
		if (userChoice == 2)
		{
			cout << "Scores being displayed";
		}
		if (userChoice == 3)
		{
			inFile.close();
			return 0;
		}
	}

}

void UpdateDisplay(enum currentState)
{

}

void CheckTopTen()
{

}

void UpdateScores()
{

}
