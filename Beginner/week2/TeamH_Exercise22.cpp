/*
        This program will take a number and divide it by 2.

        TEAM H MEMBERS
        - LE, DUC ANH TUAN (CWID: 20660170)
        - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iostream>
using namespace std;

int main()

{
	float number;
	int divider;

	divider = 2;

	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin >> number;

	number = number / divider;

	cout << "Half of your number is " << number << endl;

	return 0;
}