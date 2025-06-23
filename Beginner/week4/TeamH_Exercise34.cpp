/*
 This program will calculate and display the total amount the customer owes in
 fixed-point notation with two decimal places.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	// Defining variables
	int quantity;
	double price, discountRate = 10, discountAmount, totalOwnedBeforeDiscount,
	              totalOwnedAfterDiscount;

	// Obtaining userinput
	cout << "What is the Price? ";
	cin >> price;

	cout << "What is the Quantity? ";
	cin >> quantity;

	// Calculating the total owned before discount
	totalOwnedBeforeDiscount = price * quantity;

	// Calculating the discounted amount
	discountAmount = totalOwnedBeforeDiscount * (discountRate / 100);

	// Total amount the customer owns after discount
	totalOwnedAfterDiscount = totalOwnedBeforeDiscount - discountAmount;

	// Displaying the total owed in fixed-point notation with two decimal places
	cout << "Total owned: $" << setprecision(2) << fixed
	     << totalOwnedAfterDiscount << endl;

	return 0;
}
