#include <iostream>
#include <string>
using namespace std;

struct UserDetails
{
	string name;
	int age;
	string telephoneNumber;

	void PrintDetails()
	{
		cout << "User's Name - " << name << endl;
		cout << "User's Age - " << age << endl;
		cout << "User's Telephone Number - " << telephoneNumber << endl;
	}
};

int main()
{
	UserDetails user;
	cout << "Welcome" << endl;
	cout << "Please enter your name" << endl;
	getline(cin, user.name);
	cout << "Please enter your age" << endl;
	cin >> user.age;
	cout << "Please enter your telephone number" << endl;
	cin.ignore();
	getline(cin, user.telephoneNumber);

	user.PrintDetails();
}