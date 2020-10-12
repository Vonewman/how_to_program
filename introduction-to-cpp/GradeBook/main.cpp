#include "GradeBook.h"



int main()
{
	// Create GradeBook object myGradeBook and
	// pass course name to constructor
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.determineClassAverage(); // find average of 10 grades

	return 0;
}
