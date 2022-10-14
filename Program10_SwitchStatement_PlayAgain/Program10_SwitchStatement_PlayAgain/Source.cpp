#include <iostream>
using namespace std;

int main()
{
	char play_again;

	cout << "Do you want to play again? \nPlease enter y or n to continue" << endl;

	cin >> play_again;

	switch (play_again)
	{
	case 'y':
		cout << "You chose to play again" << endl;
	break;
	
	case 'n':
		cout << "Goodbye" << endl;
	break;

	default:
		cout << "That is neither a y or an n" << endl;
		break;
	}
}