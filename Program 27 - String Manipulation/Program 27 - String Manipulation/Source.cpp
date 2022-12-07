#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstUserName;
	cout << "Please enter your name." << endl;
	getline(cin, firstUserName);
	string testString = "Do you know who loves C++, XX does!";
	cout << testString << endl;

	testString.replace(testString.rfind("XX"),2,"");
	testString.insert(27, firstUserName, 0, firstUserName.length());

	cout << testString << endl;

	string secondUserName;
	cout << "Please enter a new name. (Longer than the first)" << endl;
	getline(cin, secondUserName);

	testString.replace(testString.rfind(firstUserName), firstUserName.length(), "");
	testString.insert(27, secondUserName, 0, secondUserName.length());

	cout << testString << endl;
}