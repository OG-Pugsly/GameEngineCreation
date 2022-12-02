#include <iostream>

using namespace std;

bool ValidChoice(string choice);

int main()
{
	cout << "Welcome to Rock, Paper, Scissors" << endl;
	cout << "Enter your selection: ";
	string choice;
	do
	{
		cin >> choice;
	} while (ValidChoice(choice));
}





bool ValidChoice(string choice)
{
	string ValidChoices[6]
	{
		"Paper",
		"paper",
		"Rock",
		"rock",
		"Scissors",
		"scissors"
	};
}

