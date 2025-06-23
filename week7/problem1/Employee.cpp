#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string empName, int empId, string empDept, string empPos)
    : name(empName), idNumber(empId), department(empDept), position(empPos) {}
Employee::Employee(string empName, int empId)
    : name(empName), idNumber(empId), department(""), position("") {}
Employee::Employee() : name(""), idNumber(0), department(""), position("") {}

// setter for name
void Employee::setName(string empName) { name = empName; }

// setter for ID number
void Employee::setIdNumber(int empId) { idNumber = empId; }

// setter for department
void Employee::setDepartment(string empDept) { department = empDept; }

// setter for position
void Employee::setPosition(string empPos) { position = empPos; }

// getter for name
string Employee::getName() const { return name; }

// getter for ID number
int Employee::getIdNumber() const { return idNumber; }

// getter for department
string Employee::getDepartment() const { return department; }

// getter for position
string Employee::getPosition() const { return position; }

// Utility function to display employee information
void Employee::displayEmployeeInfo() const {
	cout << "Name: " << name << endl;
	cout << "ID Number: " << idNumber << endl;
	cout << "Department: " << department << endl;
	cout << "Position: " << position << endl;
	cout << endl;
}