#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

// Function Prototype
bool passwordValidation(const char password[]);

int main() {
	// Defining the variables and arrays
	const int ARRAY_LENGTH = 11;
	char password[ARRAY_LENGTH];
	bool isValid = false;

	// Asking user for initial input
	cout << "Enter a password consisting of exactly 4 lower case letters and 6 "
	        "digits:\n";
	cin.getline(password, ARRAY_LENGTH);

	do {
		if (passwordValidation(password)) {
			isValid = true;
			int letterCount = 0;
			int digitCount = 0;
			for (int i = 0; i < strlen(password); ++i) {
				if (islower(password[i])) {
					letterCount++;
				} else if (isdigit(password[i])) {
					digitCount++;
				}
			}
			// Printing the results
			cout << "The number of lower case letters in the password is "
			     << letterCount << endl;
			cout << "The number of digits in the password is " << digitCount << endl;
		}
		// Input validation
		else {
			cout << "Invalid password. Please enter a password with exactly 4 lower "
			        "case letters and 6 digits"
			     << endl;
			cout << "For example, 1234abcd56 is valid. Please enter again:" << endl;
			cin.getline(password, ARRAY_LENGTH);
		}

	} while (!isValid);

	return 0;
}

// Defining passwordValidation
bool passwordValidation(const char password[]) {
	if (strlen(password) != 10) {
		return false;
	}

	int letterCount = 0;
	int digitCount = 0;

	for (int i = 0; i < strlen(password); ++i) {
		if (islower(password[i])) {
			letterCount++;
		} else if (isdigit(password[i])) {
			digitCount++;
		} else
			return false;
	}
	return (letterCount == 4 && digitCount == 6);
}