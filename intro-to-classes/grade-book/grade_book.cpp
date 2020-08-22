#include <iostream>
using namespace std;


// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage()
    {
	cout << "Welcome to the Grade Book!" << endl;
    }
};


int main()
{
    GradeBook myGradeBook;  // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage();
    return 0;
}
