// GradeBook member-function definitions. This file contains
// implementation of the member functions prototyped in GradeBook.h
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;


// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
{
	setCourseName(name);
	maximumGrade = 0; // This value will be replaced by the maximum grade
}

// function to set the course name
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)  // if name has 25 or fewer characters
		courseName = name;  // store the course name in the object
	else  // if name is longer than 25 characters
	{
		courseName = name.substr(0, 25);
		cout << "Name \"" << name << "\" exceeds maximum length (25) .\n"
			<< "Limiting courseName of first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName; // return object's courseName
}

// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for \n" << getCourseName() << "!\n" 
		<< endl;
}

// determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage()
{
	int total; // sum of grades entered by user
	int gradeCounter; // number of the grade to be entered next
	int grade;  // grade value entered by user
	double average; // average of grades


	// initialization phase
	total = 0;  // initialize total
	gradeCounter = 0;   // initialize loop counter
	
	// processing phase
	// prompt for input and read grade from user
	cout << "Enter grade or -1 to quit: ";
	cin >> grade;  // input grade or sentinel value

	// read until decimal value read from user	
	while (grade != -1)
	{
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		// prompt for input and read next grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade; // input grade or sentinel value
	}

	// termination phase
	if (gradeCounter != 0) // if user entered at least one grade
	{
		// calculate average of all grades entered
		average = static_cast<double>(total) / gradeCounter;
		
		// display total and average of grades
		cout << "\nTotal of all  " << gradeCounter << " grades entered is "
			<< total << endl;
		cout << "Class average is " << setprecision(2) << fixed << average
			<< endl;
	}
	else
	{
		cout << "No grades were entered " << endl;
	}
}

// input three grades fromuser; determine maximum
void GradeBook::inputGrades()
{
	int grade1;  // first grade entered by user
	int grade2;  // second grade entered by user
	int grade3; // third grade entered by user

	cout << "Enter three integer grades: ";
	cin >> grade1 >> grade2 >> grade3;

	// store maximum in number maximumGrade
	maximumGrade = maximum(grade1, grade2, grade3);
}


// returns the maximum of its three integer parameters
int GradeBook::maximum(int x, int y, int z)
{
	int maximumValue = x;  // assumes x is the largest of start

	// determine whether y is greater than maximumValue
	if (y > maximumValue)
		maximumValue = y;  // make y the new maximumValue

	// determine whether z is greater than maximumValue
	if (z > maximumValue)
		maximumValue = z; // make z the new maximumValue

	return maximumValue;
}


// display a report based on the grades entered by user
void GradeBook::displayGradeReport()
{
	// output maximum of grades entered 
	cout << "Maximum of grades entered: " << maximumGrade << endl;
}

