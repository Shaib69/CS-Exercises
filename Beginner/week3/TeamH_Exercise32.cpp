/*
 This program will calculate and display the number of dishwashers in stock at
 the end of the month.

  TEAM H MEMBERS
  - LE, DUC ANH TUAN (CWID: 20660170)
  - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int main() {
	// Defining the variables
	int stock, numPurchased, numSold, endingStock;

	cout << "What is the beginning stock? ";
	cin >> stock;

	cout << "What is number purchased? ";
	cin >> numPurchased;

	cout << "what is Number sold? ";
	cin >> numSold;

	// Calculating Ending Stock
	endingStock = (stock + numPurchased) - numSold;

	// displaying ending stock as well
	cout << endl
	     << "Ending stock: " << endingStock << endl;

	return 0;
}
