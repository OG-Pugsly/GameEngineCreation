#include <iostream>
#include <string>
using namespace std;

int main()
{
	char userInput[40];
	for (int i = 0; i < size(userInput); i++)
	{
		userInput[i] = '@';
	}

	cout << "Please enter your first initial, middle initial and surname. Please seperate with spaces" << endl;
	cin.getline(userInput, 256);

	for (int i = 0; i < size(userInput); i++)
	{
		if (userInput[i] == ' ')
		{
			cout << endl;
		}
		else if (userInput[i] != ' ' && userInput[i] != '@')
		{
			cout << userInput[i];
		}
		else if (userInput[i] == '@')
		{
			continue;
		}
	}
}
