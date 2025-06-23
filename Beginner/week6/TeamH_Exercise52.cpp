/*
 This program will let the user enter a series of number (the user will enter
 -99 to signal the end of the series). After all the numbers have been entered,
 the program will display the largest and smallest numbers entered.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int main() {
	// Defining the variables
	int greatestNum = 0;
	int smallestNum = 0;
	int currentNum;

	// Display instructions
	cout << "You will enter a series of integers and\n";
	cout << "I will then tell you the largest and\n";
	cout << "Enter -99 to terminate the series.\n";
	cout << "the smallest numbers you entered.\n";
	cout << "\n";
	cout << "Enter an integer (-99 to quit): ";

	// Taking user input
	cin >> currentNum;

	// Store initial input into greatest & smallest number
	greatestNum = currentNum;
	smallestNum = currentNum;

	// Continue taking user input
	while (currentNum != -99) {
		if (currentNum > greatestNum) {
			greatestNum = currentNum;
		} else if (currentNum < smallestNum) {
			smallestNum = currentNum;
		}
		cin >> currentNum;
	}

	// Output the results
	cout << "\n";
	cout << "The greatest number you entered is " << greatestNum << ".\n";
	cout << "The least number you entered is " << smallestNum << ".\n";

	return 0;
}
