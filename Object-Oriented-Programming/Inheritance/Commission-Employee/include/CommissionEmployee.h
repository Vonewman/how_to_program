// CommissionEmployee.h
// ComissionEmployee class definition represents a commission employee
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
using namespace std;


class CommissionEmployee 
{
public:
    CommissionEmployee(const string &, const string &, const string &,
    double = 0.0, double = 0.0);

    void setFirstName(const string &); // set first name;
    string getFirstName() const;  // return first name

    void setLastName(const string &); // set last name
    string getLastName() const; // return last name

    void setSocialSecurityNumber(const string &); // set SSN
    string getSocialSecurityNumber() const;     // return SSN

    void setGrossSales(double); // set gross Sales amount
    double getGrossSales() const; // return gross Sales amount

    void setCommissionRate(double); // set Commission Rate
    double getCommissionRate() const; // return Commission Rate

    double earnings() const; // calculate earnings
    void print() const; // print CommissionEmployee object
    
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;  // gross weekly sales
    double commissionRate; // commission percentage
};

#endif