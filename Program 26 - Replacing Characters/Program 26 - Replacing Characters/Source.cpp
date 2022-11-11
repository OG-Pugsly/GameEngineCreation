#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userInput;
	string replacementChar = "X";
	cout << "Please enter a sentance of text" << endl;
	getline(cin, userInput);

	for (int i = 0; i < size(userInput); i++)
	{
		if (userInput[i] == 'e')
		{
			userInput.replace(userInput[i], userInput[i], replacementChar);
		}
	}
}