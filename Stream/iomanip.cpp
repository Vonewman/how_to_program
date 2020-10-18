#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int number; 

	cout << "Enter a decimal number: ";
	cin >> number;

	// use hex stream manipulator to show hexadecimal number
	cout << number << " in hexadecimal is: " << hex
		<< number << endl;

	// use oct stream manipulator to show octal number
	cout << dec << number << " is octal is: "
		<< oct << number << endl;

	// use setbase stream manipulator to show decimal number 
	cout << setbase(10) << number << " in decimal is: "
		<< number << endl;
	return 0;
}
