#include <iostream>
#include <algorithm>
using namespace std;

int elements[5];
int largestElement[2];

int main()
{
	for (int choice = 0; choice < size(elements); choice++)
	{
		cout << "Please enter a number." << endl;
		cin >> elements[choice];
	}
	for (int element = 0; element < size(elements); element++)
	{
		if (elements[element] > largestElement[0])
		{
			largestElement[0] = elements[element];
			largestElement[1] = element;
		}
	}
	for (int element = 0; element < size(elements); element++)
	{
		cout << elements[element] << ",";
	}
	cout << endl;
	sort(elements, elements + 5, greater<int>());
	cout << endl;
	for (int element = 0; element < size(elements); element++)
	{
		cout << elements[element] << ",";
	}
	sort(elements, elements + 5);
	cout << endl;
	for (int element = 0; element < size(elements); element++)
	{
		cout << elements[element] << ",";
	}
	cout << endl << "The largest element is " << largestElement[0] << " at position " << largestElement[1]+1 << " in the array." << endl;	
}
