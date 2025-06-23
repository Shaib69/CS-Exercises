/*
 This program will ask for the weight of the package and the distance it is to
 be shipped, and then display the charges

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iomanip>
#include <iostream>
using namespace std;
int main() {

	// Declaring the constants
	const double RATE_PER_200_MILES_1 = 1.10;
	const double RATE_PER_200_MILES_2 = 2.20;
	const double RATE_PER_200_MILES_3 = 3.70;
	const double RATE_PER_200_MILES_4 = 4.80;

	// Declaring the variables
	int weight = 0, miles = 0;
	double shippingCharge = 0;
	int factor;

	// Taking in the inputs
	cout << "What is the weight of the package in kilograms (max 20 Kg): ";
	cin >> weight;

	// Writing the program so that it accounts for unexpected circumstances
	if (weight <= 0) {
		cout << endl
		     << "Weight must be greater than zero." << endl;
	} else if (weight > 20) {
		cout << endl
		     << "Weight must be less than twenty." << endl;
	} else {
		cout << "What is the distance the package is to be shipped (distance must "
		        "be positive, min 10 Mi, max 3000 Mi): ";
		cin >> miles;

		// Writing the program so that it accounts for unexpected circumstances
		if (miles < 0) {
			cout << endl
			     << "Distance must be greater than zero." << endl;
		} else if (miles < 10 || miles > 3000) {
			cout << endl
			     << "We do not ship less than 10 miles or more than 3000 miles."
			     << endl;

			// Calculate shipping charge
		} else if (weight > 0 && weight <= 20) {
			factor = (miles + 199) / 200;

			if (weight > 0 && weight <= 2) {
				shippingCharge = RATE_PER_200_MILES_1 * factor;
			} else if (weight > 2 && weight <= 6) {
				shippingCharge = RATE_PER_200_MILES_2 * factor;
			} else if (weight > 6 && weight <= 10) {
				shippingCharge = RATE_PER_200_MILES_3 * factor;
			} else if (weight > 10 && weight <= 20) {
				shippingCharge = RATE_PER_200_MILES_4 * factor;
			}
			cout << endl
			     << "The shipping charge is $" << setprecision(2) << fixed
			     << shippingCharge << endl;

			// Writing the program so that it accounts for unexpected circumstances
		} else {
			cout << "Invalid Input" << endl;
		}
	}

	return 0;
}
