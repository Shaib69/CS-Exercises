/*
 This program will calculate and display the amount paid for the stock value
 alone without the commission, the amount of the commission, and the total
 amount paid (stock plus commission).

        TEAM H MEMBERS
        - LE, DUC ANH TUAN (CWID: 20660170)
        - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int totalShares = 600, comissionRate = 2;
double pricePerShare = 21.77, stock, comissionAmount, total;

int main() {

	// calculating the amount for the stock value alone without the comission
	stock = totalShares * pricePerShare;

	// calculating the amount of the comission
	comissionAmount = stock * comissionRate / 100;

	// calculating the total amount paid
	total = comissionAmount + stock;

	// Displaying the outputs in the screen
	cout << "Stock: $" << stock << endl;
	cout << "Commission: $" << comissionAmount << endl;
	cout << "Total: $" << total << endl;

	return 0;
}
