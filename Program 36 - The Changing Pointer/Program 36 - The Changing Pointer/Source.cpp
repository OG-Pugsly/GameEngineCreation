#include <iostream>
using namespace std;

void InputDetails(int* n1, int* n2);
void OutputDetails(int& integer1, int& integer2, int* pointer);
int num1, num2;

int main()
{
	int* pNum1 = &num1;
	InputDetails(&num1, &num2);
	OutputDetails(num1, num2, pNum1);
	cout << "\nPointer has now been changed from num1 to num2\n" << endl;
	OutputDetails(num1, num2, pNum1);
	pNum1 = nullptr;
}

void InputDetails(int* n1, int* n2)
{
	cout << "Please enter a number" << endl;
	cin >> num1;
	n1 = &num1;
	cout << "Please enter another number" << endl;
	cin >> num2;
	n2 = &num2;
}

void OutputDetails(int& integer1, int& integer2, int* pointer)
{
	cout << "The value of num1 is - " << integer1 << endl;
	cout << "The memory address of num1 is - " << &integer1 << endl;
	cout << "The value of num2 is - " << integer2 << endl;
	cout << "The memory address of num2 is - " << &integer2 << endl;
	cout << "The value of pNum is - " << pointer << endl;
	cout << "The dereferenced value of pNum is - " << *pointer << endl;
	cout << "The memory address of pNum is - " << &pointer << endl;
}