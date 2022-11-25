#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userInput;
	string replacementChar = "X";
	cout << "Please enter a sentence of text" << endl;
	getline(cin, userInput);

	cout << userInput << endl;
	for (int i = 0; i < size(userInput); i++)
	{
		if (userInput[i] == 'e')
		{
			userInput.replace(i, 1, replacementChar);
		}
	}
	cout << userInput << endl;
}