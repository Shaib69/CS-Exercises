#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	// Defining Variables
	int percentageMultiplier, i;
	const int size = 10;
	double changedVal, rate;

	// Getting user Input
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> percentageMultiplier;

	// Input Validation
	while (percentageMultiplier < 0) {
		cout << "Invalid Input! Value must be greater than or equal to 0." << endl
		     << "Please Input Value Again: ";
		cin >> percentageMultiplier;
	}

	// Creating and Initializing Array
	double values[size] = {10.5, 25.5, 9.75, 6.0, 35.0,
	                       100.4, 10.65, 0.56, 14.75, 4.78};

	// Calculating Output
	for (i = 0; i < size; i++) {
		rate = percentageMultiplier / 100.0;
		changedVal = (rate * values[i]) + values[i];

		// Printing Output
		cout << fixed << showpoint << setprecision(2) << changedVal << endl;
	}

	return 0;
}
