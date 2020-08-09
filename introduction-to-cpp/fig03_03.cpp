#include <iostream>
#include <string>

using namespace std;

class GradeBook {
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName) {
	cout << "Welcome to the grade book for\n" << courseName << "!"
	     << endl;
    }
};


int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    // prompt for and input course name
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse);  // read a course name with blanks
    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);
    
    return 0;
}
