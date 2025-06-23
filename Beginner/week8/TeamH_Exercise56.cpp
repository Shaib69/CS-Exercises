/*
This program uses nested loops to collect data and calculate the average
rainfall over a period of years. It first ask for the number of years. The outer
loop will iterate once for each year. The inner loop will iterate twelve times,
once for each month. Each iteration of the inner loop will ask the user for the
inches of rainfall for that month.

After all iterations, the program will display the number of months, the total
inches of rainfall, and the average rainfall per month for the entire period.

The program does not accept a number less than 1 for the number of years, and
does not accept negative numbers for the monthly rainfall.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main()

{
	// Declaring the variables
	double avgMonthlyRain;
	int monthlyRain, years, month = 12, totalMonth = 0, totalRain = 0;

	// Set up numeric output formatting.
	cout << fixed << showpoint << setprecision(3);

	// Get the number of years.
	cout << "This program will calculate average rainfall over a" << endl;
	cout << "period of years.  How many years do you wish to average? ";
	cin >> years;

	// Input Validation
	while (years <= 0) {
		cout << "Invalid Entry!" << endl;
		cout << "Enter a number that is atleast 1 or greater: ";
		cin >> years;
	}

	cout << endl;

	// Collect rainfall data
	for (int yearCount = 1; yearCount <= years; yearCount++) {
		cout << "Year " << yearCount << endl;

		for (int monthCount = 1; monthCount <= month; monthCount++) {
			cout << "Number of inches of rain for month " << setw(2) << monthCount
			     << "? ";
			cin >> monthlyRain;

			// Input Validation
			while (monthlyRain <= -1) {
				cout << "Invalid Entry!" << endl;
				cout << "Enter a number that is atleast 0 or greater: ";
				cin >> monthlyRain;
			}
			totalRain += monthlyRain;
			totalMonth += 1;
		}

		cout << endl;
	}
	// Outputting the results
	cout << "Over a period of " << totalMonth << " months, " << totalRain
	     << " inches of rain fell." << endl;
	avgMonthlyRain =
	    static_cast<double>(totalRain) / static_cast<double>(totalMonth);
	cout << "Average monthly rainfall for the period is " << avgMonthlyRain
	     << " inches." << endl;

	return 0;
}