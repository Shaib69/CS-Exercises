#include <iomanip>
#include <iostream>

using namespace std;

// Function Prototypes
char getChoice();
double calcTotal(int days, int rate, int medication, int serviceFees);
double calcTotal(int medication, int serviceFees);
int getNumber(string question);

// Defining Variable
char choice;

int main() {
	cout << "This program will compute patient hospital charges." << endl;
	choice = getChoice();

	if (choice == 'i' || choice == 'I') {
		int days, rate, medication, serviceFees;
		double totalCharges;

		// Getting user input with input validation done via the function
		days = getNumber("Number of days in the hospital: ");
		rate = getNumber("Daily room rate: $");
		medication = getNumber("Medication charges: $");
		serviceFees = getNumber("Lab fees and other service charges: $");

		totalCharges = calcTotal(days, rate, medication, serviceFees);

		cout << "\nThe total charges are $" << fixed << setprecision(2)
		     << totalCharges << endl;
	} else if (choice == 'o' || choice == 'O') {
		int medication, serviceFees;
		double totalCharges;

		medication = getNumber("Medication charges: $");
		serviceFees = getNumber("Lab fees and other service charges: $");

		totalCharges = calcTotal(medication, serviceFees);

		cout << "\nThe total charges are $" << fixed << setprecision(2)
		     << totalCharges << endl;
	}
	return 0;
}

// Defining getChoice function
char getChoice() {
	char choice;
	cout << "What was the patient type?" << endl;
	cout << "In-patient or Out-patient? (I or O) ";
	cin >> choice;

	// Validating Input
	while (choice != 'i' && choice != 'I' && choice != 'o' && choice != 'O') {
		cout << "Error! The choice you have made is not valid, Please pick again "
		        "between I or O"
		     << endl;
		cin >> choice;
	}

	return choice;
}
// Defining calcTotal function
double calcTotal(int days, int rate, int medication, int serviceFees) {

	// defining variables
	double total;

	// performing calculations and returning the value
	total = (days * rate) + medication + serviceFees;
	return total;
}
// Overloarding CalcTotal function
double calcTotal(int medication, int serviceFees) {

	// defining variables
	double total;

	// performing calculations and returning the value
	total = medication + serviceFees;
	return total;
}
// Taking user input and validating it
int getNumber(string question) {
	int number;

	cout << question;
	cin >> number;

	while (!(number >= 0)) {
		cout << "Invalid number, please enter number zero or greater" << endl;
		cout << question;
		cin >> number;
	}

	return number;
}