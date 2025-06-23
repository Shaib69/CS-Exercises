/*
This program displays a shipping charge based on the number of items ordered by
the customer according to data provided.

TEAM H MEMBERS
        - LE, DUC ANH TUAN (CWID: 20660170)
        - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>

using namespace std;

int main() {
	// Defining the variables and 2d array
	const int ROWS = 5, COLS = 2;

	// * Array of [maximum order, shipping charge ($)]
	int order[ROWS][COLS] = {
	    {50, 20}, {100, 15}, {200, 10}, {500, 5}, {999999, 0}};

	// Asking for userinput
	int userInput;
	cout << "Number ordered (negative number or 0 to end): ";
	cin >> userInput;

	// Setting up the while and for loops
	while (userInput > 0) {
		if (userInput > 999999) {
			cout << "The limit is 999999 orders. Please enter a number less than or "
			        "equals to 999999."
			     << endl;
		} else {
			int shippingCharge = -1; // Initialize to not found
			for (int i = 0; i < ROWS && shippingCharge == -1; ++i) {
				if (userInput <= order[i][0]) {
					shippingCharge = order[i][1];
				}
			}

			cout << "Shipping charge for a quantity of " << userInput << " is $";
			cout << shippingCharge << endl;
		}

		cout << endl
		     << "Number ordered (negative number or 0 to end): ";
		cin >> userInput;
	}
	return 0;
}

// > 999999: error
// >    500: 501 -> 999999
// >    200: 201 -> 500
// >    100: 101 -> 200
// >     50:  51 -> 100
//    else :   1 -> 50

// <= 50
// <= 100
// <= 200
// <= 500
// <= 99999