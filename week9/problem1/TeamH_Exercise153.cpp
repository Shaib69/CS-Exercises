#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// employee class
class Employee {
private:
	string name, hireDate;
	int number;

public:
	// default constructor
	Employee() : name(""), number(0), hireDate("") {}

	// parameterized constructor
	Employee(string n, int num, string date) : name(n), number(num), hireDate(date) {}

	// getter functions
	string getName() const {
		return name;
	}

	int getNumber() const {
		return number;
	}

	string getHireDate() const {
		return hireDate;
	}

	// setter functions
	void setName(string n) {
		name = n;
	}

	void setNumber(int num) {
		number = num;
	}

	void setHireDate(string date) {
		hireDate = date;
	}
};

class ShiftSupervisor : public Employee {
private:
	double annualSalary, annualBonus;

public:
	// default constructor
	ShiftSupervisor() : Employee(), annualSalary(0.0), annualBonus(0.0) {}

	// Parameterized constructor
	ShiftSupervisor(string n, int num, string date, double salary, double bonus) : 
		Employee(n, num, date), annualSalary(salary), annualBonus(bonus) {}

	// getter functions
	double getAnnualSalary() const {
		return annualSalary;
	}

	double getAnnualBonus() const {
		return annualBonus;
	}

	// setter functions
	void setAnnualSalary(double salary) {
		annualSalary = salary;
	}
	void setAnnualBonus(double bonus) {
		annualBonus = bonus;
	}
};

// main function
int main() {
	ShiftSupervisor supervisor("John Doe", 859, "7/24/2014", 75000.00, 15000.00);

	// outputting the program
	cout << fixed << setprecision(2);
	cout << "Name: " << supervisor.getName() << endl;
	cout << "Employee number: " << supervisor.getNumber() << endl;
	cout << "Hire date: " << supervisor.getHireDate() << endl;
	cout << "Annual Salary: $" << supervisor.getAnnualSalary() << endl;
	cout << "Annual Production Bonus: $" << supervisor.getAnnualBonus() << endl;

	return 0;
}