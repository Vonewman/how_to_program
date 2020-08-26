#include <iostream>
#include <string>
using namespace std;


// GradeBook class definition
class GradeBook
{
public:
    void setCourseName(string name)
    {
	courseName = name;
    }

    string getCourseName()
    {
	return courseName;
    }
    
    // function that displays a welcome message to the GradeBook user
    void displayMessage()
    {
	cout << "Welcome to the Grade Book!" << endl;
    }

private:
    string courseName;
};


int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;  // create a GradeBook object named myGradeBook

    // display initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName()
	 << endl;

    // pro,pt for, input and set course name
    cout << "\nPlease enter the course name: " << endl;
    getline(cin, nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage();
    return 0;
}
