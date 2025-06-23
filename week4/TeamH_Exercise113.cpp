#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct CustomerAccount {
	string name;
	string address;
	string city;
	string state;
	string zipCode;
	string phone;
	double balance;
	string lastPayment;
};

string getStringInput(const string& prompt);
bool isValidNonNegativeDouble(const string& str, double& value);
double getValidBalanceInput(const string& prompt);
CustomerAccount enterAccountData(int customerNumber);
void displayAccountData(const CustomerAccount& account);

int main() {
	vector<CustomerAccount> customerAccounts(10);
	int nextAvailableIndex = 0;
	int choice;

	do {
		cout << "1. Enter new account information" << endl;
		cout << "2. Change account information" << endl;
		cout << "3. Display all account information" << endl;
		cout << "4. Exit the program" << endl;
		cout << "\nEnter your choice: ";
		cin >> choice;
		cin.ignore(10000, '\n');

		switch (choice) {
		case 1:
			if (nextAvailableIndex < customerAccounts.size()) {
				customerAccounts[nextAvailableIndex] =
				    enterAccountData(nextAvailableIndex);
				nextAvailableIndex++;
			} else {
				cout << "Maximum number of accounts reached." << endl;
			}
			break;
		case 2:
			if (nextAvailableIndex > 0) {
				int customerNumber;
				cout << "Customer number: ";
				cin >> customerNumber;
				cin.ignore(10000, '\n');
				if (customerNumber >= 0 && customerNumber < nextAvailableIndex) {
					displayAccountData(customerAccounts[customerNumber]);
					customerAccounts[customerNumber] = enterAccountData(customerNumber);
				} else {
					cout << "Invalid customer number." << endl;
				}
			} else {
				cout << "No accounts to change yet." << endl;
			}
			break;
		case 3:
			if (nextAvailableIndex > 0) {
				for (int i = 0; i < nextAvailableIndex; ++i) {
					displayAccountData(customerAccounts[i]);
				}
				cout << "Press enter to continue...";
				cin.get();
			} else {
				cout << "No accounts stored yet." << endl;
			}
			break;
		}
	} while (choice != 4);

	return 0;
}

// Function to get valid string input from the user
string getStringInput(const string& prompt) {
	string input;
	cout << prompt;
	getline(cin >> ws, input);
	return input;
}

// Function to check if a string can be a valid non-negative double
bool isValidNonNegativeDouble(const string& str, double& value) {
	if (str.empty()) {
		return false;
	}
	bool decimalPointSeen = false;
	for (char c : str) {
		if (!isdigit(c)) {
			if (c == '.') {
				if (decimalPointSeen) {
					return false;
				} else {
					decimalPointSeen = true;
				}
			} else {
				return false;
			}
		}
	}
	value = atof(str.c_str());
	return value >= 0;
}

// Function to get valid double input for account balance (without stringstream)
double getValidBalanceInput(const string& prompt) {
	double balance;
	string input;
	bool isValid = false;
	while (!isValid) {
		cout << prompt;
		getline(cin >> ws, input);
		if (isValidNonNegativeDouble(input, balance)) {
			isValid = true;
		} else {
			cout << "Invalid input. Please enter a valid non-negative number."
			     << endl;
		}
	}

	return balance;
}

// Function to enter data for a new account
CustomerAccount enterAccountData(int customerNumber) {
	CustomerAccount newAccount;
	cout << "\nCustomer name: ";
	getline(cin >> ws, newAccount.name);
	cout << "Customer address: ";
	getline(cin >> ws, newAccount.address);
	cout << "City: ";
	getline(cin >> ws, newAccount.city);
	cout << "State: ";
	getline(cin >> ws, newAccount.state);
	cout << "ZIP code: ";
	getline(cin >> ws, newAccount.zipCode);
	cout << "Telephone: ";
	getline(cin >> ws, newAccount.phone);
	newAccount.balance = getValidBalanceInput("Account balance: ");
	cout << "Date of last payment: ";
	getline(cin >> ws, newAccount.lastPayment);
	cout << "You have entered informationfor customer number " << customerNumber
	     << endl;
	return newAccount;
}

// Function to display the data of a single account
void displayAccountData(const CustomerAccount& account) {
	cout << "Customer name: " << account.name << endl;
	cout << "Customer address: " << account.address << endl;
	cout << "City: " << account.city << endl;
	cout << "State: " << account.state << endl;
	cout << "Zip: " << account.zipCode << endl;
	cout << "Telephone: " << account.phone << endl;
	cout << "Account balance: $" << fixed << setprecision(2) << account.balance
	     << endl;
	cout << "Date of last payment: " << account.lastPayment << endl;
	cout << endl;
}