#include <iostream>
using namespace std;

int userInputs[10];
int outputResults[10];
int numOfOddNums;
int numOfEvenNums;
int sumOfOdds;
int sumOfEvens;

void OutputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool OddOrEven(int numToCheck);

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> userInputs[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (OddOrEven(userInputs[i]) == false)
		{
			numOfEvenNums++;
			sumOfEvens += userInputs[i];
		}
		else
		{
			numOfOddNums++;
			sumOfOdds += userInputs[i];
		}
	}
	OutputResults(numOfOddNums, sumOfOdds, numOfEvenNums, sumOfEvens);
}

bool OddOrEven(int numToCheck)
{
	return numToCheck % 2;
}

void OutputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "The number of odd numbers entered : " << numOfOdd << endl;
	cout << "The summation of the odd numbers entered is : " << oddTotal << endl;
	cout << "The number of even numbers entered : " << numOfEven << endl;
	cout << "The summation of the even numbers entered is : " << evenTotal << endl;
}
