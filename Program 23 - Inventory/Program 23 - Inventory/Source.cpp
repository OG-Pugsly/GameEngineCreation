#include <iostream>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	char choice;

	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";

	cout << "Current Inventory" << endl;

	for (int i = 0; i < MAX_ITEMS; i++)
	{
		cout << i+1 << ". " << inventory[i] << endl;
	}

	cout << "You have picked up a Staff, would you like to add this to your inventory? This will replace the Dagger in your inventory" << endl;
	cin >> choice;


InvalidChoice:


	if (choice == 'y' || choice == 'Y')
	{
		inventory[3] = "staff";
		cout << "Current Inventory" << endl;
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cout << i+1 << ". " << inventory[i] << endl;
		}
	}
	else if (choice == 'n' || choice == 'N')
	{
		cout << "Current Inventory" << endl;
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cout << i+1 << ". " << inventory[i] << endl;
		}
	}
	else
	{
		cout << "Please enter valid response.";
		goto InvalidChoice;
	}
}