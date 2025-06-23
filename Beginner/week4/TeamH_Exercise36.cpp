/*
 This program will generate two random numbers between 1 and 1000, add them and
 wait for the user to press a key to display the correct answer.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	// Initialize random number generator
	srand(time(0));

	// Generate two random numbers between 1 and 1000
	int num1 = rand() % 1000 + 1;
	int num2 = rand() % 1000 + 1;

	cout << "Press Enter to see the answer . . ." << endl;

	// Display the two random numbers
	cout << setw(6) << num1 << endl;
	cout << '+' << setw(5) << num2 << endl;
	cout << "------";

	// Wait for the user to press a key to display the correct answer.
	cin.get();

	// Display the correct answer.
	cout << setw(6) << num1 + num2 << endl;

	return 0;
}
