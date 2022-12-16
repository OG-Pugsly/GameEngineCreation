#include <iostream>

using namespace std;

int main()
{
	int inputNumber;
	int sum = 0;
	float mean = 0.0f;
	int numOfInputs = 0;


	cout << "Please enter a number." << endl;
	cin >> inputNumber;
	numOfInputs++;
	sum += inputNumber;
	mean = (float)sum / (float)numOfInputs;

	do
	{
		cout << "Please enter a number." << endl;
		cin >> inputNumber;
		numOfInputs++;
		sum += inputNumber;
		mean = (float)sum / (float)numOfInputs;

		cout << "The sum of the numbers is " << sum << " and the mean of the numbers is " << mean << endl;
	} while (inputNumber != 0);
}