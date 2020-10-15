// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp
#include <string>
using namespace std;


class GradeBook
{
public:
	GradeBook(string); // constructor that initializes courseName
	void setCourseName(string); // function that sets the course name
	string getCourseName(); // function that get the course name
	void displayMessage(); // function that displays a Welcome Message
	void determineClassAverage();  // averages grades entered by the user
	void inputGrades();  // input three grades from user
	void displayGradeReport(); // display a report based on the grades
	int maximum(int, int, int); // determine max of 3 values

private:
	string courseName; // course name for this GradeBook
	int maximumGrade; // maximum of three grades
};
