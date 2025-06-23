#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
	std::string name;
	int idNumber;
	std::string department;
	std::string position;

public:
	// Constructors
	Employee(std::string empName, int empId, std::string empDep,
	         std::string empPos);
	Employee(std::string empName, int empId);
	Employee();

	// Setter functions
	void setName(std::string empName);
	void setIdNumber(int empId);
	void setDepartment(std::string empDept);
	void setPosition(std::string empPos);

	// Getter Functions
	std::string getName() const;
	int getIdNumber() const;
	std::string getDepartment() const;
	std::string getPosition() const;

	// Utility function
	void displayEmployeeInfo() const;
};

#endif