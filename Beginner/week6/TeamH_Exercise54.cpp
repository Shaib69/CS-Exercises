/*
 This program will display the sum of the even integers between and including
 two numbers entered by the user. The program will display an error message if
 the first integer entered by the user is greater than the second number.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int main() {
	// Declaring variables
	int firstNum, secondNum, sum = 0;

	// Displaying the program
	cout << "First integer: ";
	cin >> firstNum;

	cout << "Second integer: ";
	cin >> secondNum;

	if (firstNum > secondNum)
		cout << "The first integer must be smaller than the second integer. Please "
		        "run the program again."
		     << endl;

	else {
		for (int i = (firstNum % 2 == 0) ? firstNum : firstNum + 1; i <= secondNum;
		     i += 2) {
			sum += i;
		}
		cout << "Sum: " << sum << endl;
	}

	return 0;
}
