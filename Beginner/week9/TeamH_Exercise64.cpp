#include <iomanip>
#include <iostream>

using namespace std;

// Function Prototypes
int getNumEmployees();
int getTotalDaysAbsent(int numEmployees);
double calculateAvgAbsent(int numEmployees, int totalDays);

int main() {
	int numEmployees = getNumEmployees();
	int totalDays = getTotalDaysAbsent(numEmployees);
	double avgAbsent = calculateAvgAbsent(numEmployees, totalDays);

	cout << "The average number of days missed was " << fixed << setprecision(0);
	cout << avgAbsent << '.' << endl;

	return 0;
}

// Function Definitions
int getNumEmployees() {

	int numEmployees;
	do {
		cout << "How many employees are there in the company? ";
		cin >> numEmployees;
		if (numEmployees < 1)
			cout << "Invalid input. Number of employees must be atleast 1" << endl;

	} while (numEmployees < 1);
	return numEmployees;
}

int getTotalDaysAbsent(int numEmployees) {
	int totalDays = 0;

	for (int i = 1; i <= numEmployees; ++i) {
		int daysAbsent;
		do {
			cout << "How many days did employee " << i << " miss? ";
			cin >> daysAbsent;
			if (daysAbsent < 0) {
				cout << "Invalid input. Days absent cannot be a negative number"
				     << endl;
			}
		} while (daysAbsent < 0);
		totalDays += daysAbsent;
	}
	return totalDays;
}

double calculateAvgAbsent(int numEmployees, int totalDays) {
	double AvgAbsent;
	AvgAbsent =
	    static_cast<double>(totalDays) / static_cast<double>(numEmployees);
	return AvgAbsent;
}