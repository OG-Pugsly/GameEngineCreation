#include <iostream>
using namespace std;

int main()
{
	bool a = false;
	bool b = true;

	int num1 = 12;
	int num2 = 5;
	int num3 = 7;

	cout << "Number 1 is - " << num1 << " Number 2 is - " << num2 << " Number 3 is - " << num3 << endl;

	if (a)
	{
		num1 += 10;
		num2 += 15;
	}
	else if (b)
	{
		num1++;
		num3 += 20;
	}
	else
	{
		num1--;
		num2--;
		num3--;
	}

	cout << "Number 1 is - " << num1 << " Number 2 is - " << num2 << " Number 3 is - " << num3 << endl;
}
