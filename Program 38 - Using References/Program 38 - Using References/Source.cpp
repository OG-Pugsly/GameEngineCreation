#include <iostream>

using namespace std;

void Add25(int& RefNum);
void Subtract25(int& RefNum);

int main()
{
	int num;
	int& rNum = num;
	cout << "Please enter a number" << endl;
	cin >> num;
	cout << num << endl;   
	Add25(rNum);
	cout << num << endl;
	Subtract25(rNum);
	cout << num << endl;
	return 0;
}

void Add25(int& RefNum)
{
	RefNum += 25;
}

void Subtract25(int& RefNum)
{
	RefNum -= 25;
}