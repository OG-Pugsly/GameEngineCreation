#include <iostream>
using namespace std;

int SmallestNumber(int a, int b);
int MultiplyByTen(int a);
void DivideByThree(float a);
int timesToLoop = 3;

int main()
{
	int userNum1;
	int userNum2;
	for (int i = 0; i < timesToLoop; i++)
	{
		cout << "Enter your first number:" << endl;
		cin >> userNum1;

		cout << "Enter your second number:" << endl;
		cin >> userNum2;

		cout << SmallestNumber(userNum1, userNum2) << " is the smallest number" << endl;
	}

	int userNum3;
	for (int i = 0; i < timesToLoop; i++)
	{
		cout << "Enter your number to be multiplied:" << endl;
		cin >> userNum3;
		DivideByThree((float)MultiplyByTen(userNum3));
	}
}

int SmallestNumber(int a, int b)
{
	if (a <= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int MultiplyByTen(int a)
{
	a *= 10;
	return a;
}

void DivideByThree(float a)
{
	float ans = a / 3;
	cout << a << " divided by 3 = " << ans << endl;
}