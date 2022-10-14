#include <iostream>
using namespace std;

int main()
{

	char selection;
	bool validSelection = false;

	cout << "Please select a difficulty.\n1. Easy Peasy, Lemon Squeezy.\n2. Still chillin.\n3. Middle ground.\n4. They won't go easy from here.\n5. Thou are not prepared...\n";

	cin >> selection;

	while (!validSelection)
	{
		switch (selection)
		{
		case '1':
			cout << "You have chosen \"Easy Peasy, Lemon Squeezy\" What a scrub" << endl;
			validSelection = true;
			break;
		case '2':
			cout << "You have chosen \"Still Chillin\" Y'all should have this" << endl;
			validSelection = true;
			break;
		case '3':
			cout << "You have chosen \"Middle ground\" Let's Go!" << endl;
			validSelection = true;
			break;
		case '4':
			cout << "You have chosen \"They won't go easy from here\" As it says on the tin really..." << endl;
			validSelection = true;
			break;
		case '5':
			cout << "You have chosen \"Thou are not prepared...\" You sure you're ready for this?" << endl;
			validSelection = true;
			break;
		default:
			cout << "Failed to select a difficulty, even \"Easy Peasy\" may be too hard ngl.\n";
			cin >> selection;
			validSelection = false;
			break;
		}
	}
}

