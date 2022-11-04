#include <iostream>
using namespace std;

int elements[10];
int lowestElement = 2147483647;
int elementPosition;

int main()
{
	for (int choice = 0; choice < 10; choice++)
	{
		cout << "Please enter desired number" << endl;
		cin >> elements[choice];
	}
	for (int element = 0; element < 10; element++)
	{
		if (elements[element] <= lowestElement)
		{
			lowestElement = elements[element];
			elementPosition = element + 1;
		}
	}
	cout << "The lowest value is " << lowestElement << ". This was element number " << elementPosition << " in the array." << endl;
}