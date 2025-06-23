/*
 This program will ask which package the customer has purchased and how many
 hours were used. Then, it will calculate and display the total amount due. If
 the user enter an invalid option or invalid hours, the program will display an
 error message.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int main() {
	// Declaring the variables
	int package, hours, additionalHours;
	double totalAmount;

	// Creating the menu interface
	cout << "Select a subscription package:" << endl;
	cout << "1. Package A" << endl;
	cout << "2. Package B" << endl;
	cout << "3. Package C" << endl;
	cout << "4. Quit" << endl;
	cout << endl;

	// Taking the user Input
	cin >> package;

	cout << "How many hours were used? ";
	cin >> hours;

	if (hours >= 0 && hours <= 744) {
		switch (package) {
		case 1:
			// User selects package A: For $9.95 per month 10 hours of access are
			// provided.
			totalAmount = 9.95;
			additionalHours = hours - 10;

			// Additional hours are $2.00 per hour.
			if (additionalHours > 0) {
				totalAmount += additionalHours * 2.00;
			}
			cout << "The total amount due is $" << totalAmount << endl;

		case 2:
			// User selects package B: For $14.95 per month 20 hours of access are
			// provided.
			totalAmount = 14.95;
			additionalHours = hours - 20;

			// Additional hours are $1.00 per hour.
			if (additionalHours > 0) {
				totalAmount += additionalHours * 1.00;
			}
			cout << "The total amount due is $" << totalAmount << endl;
			break;

			// User selects package C: For $19.95 per month unlimited access is
			// provided.
		case 3:
			totalAmount = 19.95;
			cout << "The total amount due is $" << totalAmount << endl;
			break;

			// User selects Quit.
		case 4:
			cout << "The Program is Ending.\n";
			break;

			// Writing the program so that it accounts for unexpected circumstances
		default:
			cout << "Invalid Input";
		}
		// Writing the program so that it accounts for unexpected circumstances
	} else {
		cout << "Invalid input";
	}

	return 0;
}