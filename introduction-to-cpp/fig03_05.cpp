// Fig 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member functions to set and get its value;
// Create and manipulate a GRadeBook object with these functions.


#include <iostream>
#include <string>

using namespace std;

// GradeBook class definition
class GradeBook {
public:
    // function that sets the course name
    void setCourseName(string name) {
	courseName = name;
    }

    // function that gets the course name
    string getCourseName() {
	return courseName;
    }

    // function that displays a welcome message
    void displayMessage() {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!"
	     << endl;
    }

private:
    string courseName;
    
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    // display initial value of CourseName
    cout << "Initial course name is: " << myGradeBook.getCourseName()
	 << endl;

    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage();

    return (0);
}
