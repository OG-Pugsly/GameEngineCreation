#include <iostream>
using namespace std;

int main()
{
	char userStatus;
	int userGameChoice;

	cout << "Hit me up with your status pretty please. \ns for Student.\nt for Teacher.\no for Other." << endl;
	cin >> userStatus;

	cout << "Which game doth thou wishest to partake in? 1 or 2" << endl;
	cin >> userGameChoice;

	if (userStatus == 's' || userStatus == 't')
	{
		if (userGameChoice == 1)
		{
			cout << "Ye get a 20% discount" << endl;
		}
		else if (userGameChoice == 2)
		{
			cout << "Ye get a 10% discount" << endl;
		}
		else
		{
			cout << "Invalid selection" << endl;
		}
	}
	else
	{
		cout << "Lol no discount for you matey!" << endl;
	}
}