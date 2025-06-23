#include "Employee.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Employee 1
	Employee employee1("Paul Rogers", 12345, "Accounting", "Vice President");

	// Employee 2
	Employee employee2("John Reid", 34567);

	// Using setter functions to assign the rest of the values
	employee2.setDepartment("IT");
	employee2.setPosition("Programmer");

	// Employee 3
	Employee employee3;

	// Using setter functions to assign the values
	employee3.setName("Peter Meyers");
	employee3.setIdNumber(47899);
	employee3.setDepartment("Manufacturing");
	employee3.setPosition("Engineer");

	// Outputting the program
	employee1.displayEmployeeInfo(); // Displays info for Paul Rogers
	employee2.displayEmployeeInfo(); // Displays info for John Reid
	employee3.displayEmployeeInfo(); // Displays info for Peter Meyers

	return 0;
}