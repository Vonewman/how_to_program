#include <iostream>
using namespace std;

void cubeByReference(int *); // prototype

int main()
{
	int number = 5;

	cout << "THe original value of number is " << number;

	cubeByReference(&number);  // pass number address to cubeByReference

	cout << "\nTHe new value of number is " << number << endl;

	return 0;
}

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
