#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class EmployeeInfo {
private:
	string name;
	double hourlyRate;
	double hoursWorked;

public:
	// default constructor
	EmployeeInfo() : name(""), hourlyRate{0.0}, hoursWorked(0.0) {}

	// Setter functions
	void setName(const string& input) { name = input; }
	void setHoursWorked(double input) { hoursWorked = input; }
	void setHourlyPay(double input) { hourlyRate = input; }

	// Getter functions
	string getName() const { return name; }
	double getHourlyRate() const { return hourlyRate; }
	double getHoursWorked() const { return hoursWorked; }
	double calcPay() const { return hourlyRate * hoursWorked; }
};

// Main Function
int main() {
	// Defining the variables
	EmployeeInfo employee;
	string nameInput;
	double numHours, rate;

	// Starting the program
	cout << "\nWelcome to my payroll program" << endl;

	cout << "Enter the employee name (stop to exit): ";
	getline(cin, nameInput);

	while (nameInput != "stop") {

		employee.setName(nameInput);

		// Input Validating hourly rate
		cout << "Please enter hourly rate: ";
		cin >> rate;
		while (rate < 0) {
			cout << "Invalid hourly rate. Please enter positive numbers only: ";
			cin >> rate;
		}
		employee.setHourlyPay(rate);

		// Input validating number of hours worked
		cout << "Please enter the number of hours worked: ";
		cin >> numHours;
		while (numHours < 0) {
			cout << "Invalid amount of hours worked. Please enter positive numbers "
			        "only: ";
			cin >> numHours;
		}
		employee.setHoursWorked(numHours);

		cin.ignore(10000, '\n'); // Clear leftover newline before next getline

		// Printing the results
		cout << "Employee Name: " << employee.getName() << endl;
		cout << fixed << setprecision(2);
		cout << "Weekly pay amount : " << employee.calcPay() << endl
		     << endl;

		cout << "Enter the employee name (stop to exit): ";
		getline(cin, nameInput);
	}
	return 0;
}