// CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.

#include <iostream>
#include "CommissionEmployee.h" 
using namespace std;


// constructor
CommissionEmployee::CommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate)
{
    firstName = first; // should validate
    lastName = last; // should validate
    socialSecurityNumber = ssn; // should validate
    setGrossSales(sales); // validate and store gross sales
    setCommissionRate(rate); // validate and store gross sales
}

// set first name
void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}

// return first name
string CommissionEmployee::getFirstName() const
{
    return firstName;
}

// set last name
void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

// return last name
string CommissionEmployee::getLastName() const
{
    return lastName;
}

// set social security number
void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

// return social security number
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

// set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

// return gross sales amount 
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

// set commission rate
void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

// calculate earnings
double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}

void CommissionEmployee::print() const
{
    cout << "commission employee: " << firstName << ' ' << lastName
	 << "\nsocia; security number: " << socialSecurityNumber
	 << "\ngross sales: " << grossSales
	 << "\ncommission rate: " << commissionRate;
}





