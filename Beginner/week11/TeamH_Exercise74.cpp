#include <iostream>
using namespace std;

int main() {
	// Defining the variables and arrays
	const int SIZE = 5;
	int ids[SIZE] = {10, 14, 34, 45, 78};
	int prices[SIZE] = {125, 600, 250, 350, 225};
	int quantities[SIZE] = {5, 3, 9, 10, 2};
	int value, index = 0;
	bool found = false;

	// Starting the program
	cout << "Enter the product ID (0 or a negative number to end): ";
	cin >> value;

	// Input Validation
	while (value > 0) {
		int results = -1; // Initialize results to -1

		found = false;
		index = 0;
		while (index < SIZE && !found) {
			if (ids[index] == value) {
				found = true;
				results = index;
			}
			index++;
		}

		// Input checking
		if (results == -1) {
			cout << "Product ID " << value << " is not available." << endl
			     << endl;
		} else {
			cout << "Price: $" << prices[results] << endl;
			cout << "Quantity: " << quantities[results] << endl
			     << endl;
		}

		cout << "Enter the product ID (0 or a negative number to end): ";
		cin >> value;
	}
	return 0;
}
