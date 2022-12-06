#include <iostream>
#include <string>
#include <array>

using namespace std;

struct Item
{
	string Name;
};

string DisplayInventory(Item items[]);
bool ValidItem(string itemName);

int main()
{
	Item listOfItems[3];
	listOfItems[0].Name = "Sword";

	cout << "Type which item you wish to keep: Staff or Knife" << endl;
	string choice;
	getline(cin, choice);
	if (ValidItem(choice))
	{
		listOfItems[1].Name = choice;
		cout << DisplayInventory(listOfItems) << endl;
	}
	else
	{
		cout << "Invalid selection" << endl;
	}

	cout << "Type which item you wish to keep: Healing Potion or Fire Spell" << endl;
	getline(cin, choice);
	if (ValidItem(choice))
	{
		listOfItems[2].Name = choice;
		cout << DisplayInventory(listOfItems) << endl;
		cout << "Your inventory is now full!" << endl;
	}
	else
	{
		cout << "Invalid selection" << endl;
	}

	cout << "You have found a magic ring! What item would you like to replace in your inventory" << endl;
	cout << DisplayInventory(listOfItems) << endl;
	int replaceChoice;
	cin >> replaceChoice;
	listOfItems[replaceChoice - 1].Name = "Magic Ring";

	cout << DisplayInventory(listOfItems) << endl;

	cout << "You have been robbed!!" << endl;
	
	for (int item = 0; item < 3; item++)
	{
		listOfItems[item].Name = "";
	}

	cout << DisplayInventory(listOfItems) << endl;

}

string DisplayInventory(Item items[])
{
	string inventoryDisplay;
	inventoryDisplay += "Your inventory holds:\n";

	for (int item = 0; item < 3; item++)
	{
		inventoryDisplay += to_string(item + 1);
		inventoryDisplay += ": ";
		inventoryDisplay += items[item].Name;
		inventoryDisplay += "\n";
	}
	return inventoryDisplay;
}

bool ValidItem(string itemName)
{
	const string VALIDITEMS[6]
	{
		"Sword",
		"Staff",
		"Knife",
		"Healing Potion",
		"Fire Spell",
		"Magic Ring"
	};

	for (int itemCheckID = 0; itemCheckID < 6; itemCheckID++)
	{
		if (itemName == VALIDITEMS[itemCheckID])
		{
			return true;
		}
	}
	return false;
}