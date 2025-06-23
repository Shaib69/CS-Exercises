/*
        This program generates the square roots from 1 to 5 and displays them as
   a table.

        TEAM H MEMBERS
        - LE, DUC ANH TUAN (CWID: 20660170)
        - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int main() {
	// Declare and initialize double variables.
	double one = 1.000, two = 1.414, three = 1.732, four = 2.000, five = 2.236;

	// Output statements to generate the heading
	cout << "N\tSquare Root\n";
	cout << "=\t===========\n";

	// Output Statements to generate the values for the tables
	cout << "1\t" << one << '\n';
	cout << "2\t" << two << '\n';
	cout << "3\t" << three << '\n';
	cout << "4\t" << four << '\n';
	cout << "5\t" << five << '\n';

	return 0;
}