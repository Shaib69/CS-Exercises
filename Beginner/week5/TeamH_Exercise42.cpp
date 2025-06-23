/*
 This program will calculate and display the amount of change, as well as how
 many dollars, quarters, dimes, nickels, and pennies to return to the customer.
 If the the amount paid is less than the amount owed, the program will display
 an error message

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	// Declaring constants
	const int PENNIES_PER_CENT = 1;
	const int NICKELS_PER_CENT = 5;
	const int DIMES_PER_CENT = 10;
	const int QUARTERS_PER_CENT = 25;
	const int CENTS_PER_DOLLAR = 100;

	// Declaring varables
	double amountOwned, changeInDollars;
	int amountPaid, changeInCents, changeRemaining, dollars, quarters, dimes,
	    nickels, pennies;

	// Obtaining user inputs.
	cout << "Enter the amount owed: ";
	cin >> amountOwned;

	cout << "Enter the amount paid: ";
	cin >> amountPaid;

	// if the amount paid is less than amount owned, display an error message.
	if (amountPaid < amountOwned) {
		cout << endl
		     << "The amount paid is less than the amount owned. Please run the "
		        "program again"
		     << endl;
	} else {
		// Convert amount paid and amount owned from dollars to cents.
		amountPaid *= CENTS_PER_DOLLAR;
		amountOwned *= CENTS_PER_DOLLAR;

		// calculate the change (in cents and in dollars)
		changeInCents = amountPaid - amountOwned;
		changeInDollars = static_cast<double>(changeInCents) /
		                  static_cast<double>(CENTS_PER_DOLLAR);

		// calculate the number of dollar bills to return to the customer
		dollars = changeInCents / CENTS_PER_DOLLAR;
		changeRemaining = changeInCents % CENTS_PER_DOLLAR;

		// calculate the number of quarters to return to the customer
		quarters = changeRemaining / QUARTERS_PER_CENT;
		changeRemaining %= QUARTERS_PER_CENT;

		// calculate the number of dimes to return to the customer
		dimes = changeRemaining / DIMES_PER_CENT;
		changeRemaining %= DIMES_PER_CENT;

		// calculate the number of nickels to return to the customer
		nickels = changeRemaining / NICKELS_PER_CENT;
		changeRemaining %= NICKELS_PER_CENT;

		// calculate the number of pennies to return to the customer
		pennies = changeRemaining;

		cout << endl;
		cout << "Change: " << setprecision(2) << fixed << changeInDollars << endl;
		cout << "Dollars: " << dollars << endl;
		cout << "Quarters: " << quarters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickels: " << nickels << endl;
		cout << "Pennies: " << pennies << endl;
	}

	return 0;
}
