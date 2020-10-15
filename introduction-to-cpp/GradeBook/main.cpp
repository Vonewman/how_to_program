#include "GradeBook.h"



int main()
{
	// Create GradeBook object myGradeBook and
	// pass course name to constructor
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.inputGrades(); // read grades from user
	myGradeBook.displayGradeReport(); // display report based on grades
	return 0;
}
