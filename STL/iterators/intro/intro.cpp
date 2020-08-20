#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    cout << "Enter two integers: ";

    // CReate istream_ierator for reading int values from cin
    istream_iterator<int> inputInt(cin);

    int number1 = *inputInt;
    ++inputInt;
    int number2 = *inputInt;

    // create ostream_iterator for writing int values to cout
    ostream_iterator<int> outputInt(cout);

    cout << "The um is: ";
    *outputInt = number1 + number2;
    cout << endl;
}