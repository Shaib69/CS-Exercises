/*
This program displays a shipping charge based on the number of items ordered by
the customer according to data provided.

TEAM H MEMBERS
        - LE, DUC ANH TUAN (CWID: 20660170)
        - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// Defining Global Variable
const int NUM_PEOPLE = 5;

// Function prototype
void display(vector<double>, double, double, double);

int main() {
	// Defining the variables
	vector<double> peopleWeight(NUM_PEOPLE);
	double totalWeight = 0, avgWeight, maxWeight;

	// Getting the userinput
	for (int i = 0; i < NUM_PEOPLE; ++i) {
		cout << "Enter weight " << i + 1 << ": ";
		cin >> peopleWeight[i];

		// Calculating total weight
		totalWeight += peopleWeight[i];
	}

	// Calculating average weight
	avgWeight = totalWeight / 5;

	// Calculating max weight
	maxWeight = peopleWeight[0];

	for (int i = 1; i < NUM_PEOPLE; ++i) {
		if (peopleWeight[i] > maxWeight) {
			maxWeight = peopleWeight[i];
		}
	}

	// Displaying the results
	display(peopleWeight, totalWeight, avgWeight, maxWeight);

	return 0;
}

// Defining the display function
void display(vector<double> peopleWeight, double totalWeight, double avgWeight,
             double maxWeight) {
	cout << fixed << showpoint << setprecision(2) << "\nYou entered:";

	for (int i = 0; i < NUM_PEOPLE; ++i) {
		cout << " " << peopleWeight[i];
	}

	cout << endl
	     << endl
	     << "Total weight: " << totalWeight << endl;
	cout << "Average weight: " << avgWeight << endl;
	cout << "Max weight: " << maxWeight << endl;
}
