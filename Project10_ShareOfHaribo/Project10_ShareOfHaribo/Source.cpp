#include <iostream>
using namespace std;

int main()
{
	int numOfHaribo = 40;
	int numOfStudents = 14;
	int numOfSweetsEach;
	int numForMe;
	
	char customAmounts;

	cout << "Custom values?" << endl;
	cin >> customAmounts;

	switch (customAmounts)
	{
	case 'y':
		cout << "How many packets are available?" << endl;
		cin >> numOfHaribo;
		cout << "How many students have turned up?" << endl;
		cin >> numOfStudents;
		break;
	case 'n':
		numOfHaribo = 40;
		numOfStudents = 14;
		break;
	default:
		break;
	}

	numOfSweetsEach = numOfHaribo / numOfStudents;
	numForMe = numOfHaribo % numOfStudents;
	cout << "Le students get " << numOfSweetsEach << " packets of sweets each" << endl;
	cout << "You get the " << numForMe << " packets of sweets remaining" << endl;
	
	return 0;
}