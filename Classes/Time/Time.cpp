// Member-function defintions for class Time.
#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;


// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consisten state.
Time::Time()
{
	hour = minute = second = 0;
}

// set new Time value using universal time; ensure that
// the data remains consistent by setting invalid values to zero
void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h < 24) ? h : 0; // validate hour
	minute = (m >= 0 && m < 60) ? m : 0; // validate minute
	second = (s >= 0 && s < 60) ? s : 0; // validate second
}

// print Time in universl-time format (HH:MM:SS)
void Time::printUniversal()
{
	cout << setfill('O') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;
}

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('O') << setw(2) << minute << ":" << setw(2)
		<< second << (hour < 12 ? " AM" : " PM" );
}

