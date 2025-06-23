#include <iomanip>
#include <iostream>

using namespace std;

void output(int startHour, int startMinute, int waitHour,
            int waitMinute); // Prototype
bool inputValid(int hoursTime, int minTime);

int main() {

	// Defining the variables
	int startHour, startMinute, waitHour, waitMinute;
	char userChoice, colon;

	do {
		// Taking User Input
		cout << "Compute completion time from current time and waiting period"
		     << endl;
		cout << "Current time:" << endl;
		cout << "Enter 24 hour time in the format HH:MM" << endl;
		cin >> startHour >> colon >> startMinute;

		// Validating Input
		while (!inputValid(startHour, startMinute) || colon != ':') {
			cout << "Invalid Input! Please enter a valid 24-hour format time (HH:MM.)"
			     << endl;
			cin >> startHour >> colon >> startMinute;
		}

		cout << "Waiting time:" << endl;
		cout << "Enter 24 hour time in the format HH:MM" << endl;
		cin >> waitHour >> colon >> waitMinute;

		// Validating Input
		while (!inputValid(waitHour, waitMinute) || colon != ':') {
			cout << "Invalid Input! Please enter a valid 24-hour format time (HH:MM.)"
			     << endl;
			cin >> waitHour >> colon >> waitMinute;
		}

		// Calculating and displaying the final time
		output(startHour, startMinute, waitHour, waitMinute);

		// Asking if the user wants to continue
		cout << endl
		     << "Enter Y or y to continue, any other halts" << endl
		     << endl;
		cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');

	cout << "Press any key to continue" << endl;
	cin.ignore();
	cin.get();

	return 0;
}

// Defining the output function
void output(int startHour, int startMinute, int waitHour, int waitMinute) {
	int finalHour, finalMinute;

	// Calculate total minutes
	finalMinute = startMinute + waitMinute;
	finalHour = startHour + waitHour + (finalMinute / 60);
	finalMinute %= 60;

	// Adjust hours if they exceed 24
	if (finalHour >= 24) {
		finalHour -= 24;
		cout << "Completion time is in the day following the start time" << endl;
	}

	// Displaying the results
	cout << "Completion Time in 24 hour format:" << endl;
	cout << finalHour << ':' << finalMinute << endl;
}
// Input validation
bool inputValid(int hoursTime, int minTime) {
	return (hoursTime >= 0 && hoursTime <= 24) && (minTime >= 0 && minTime <= 59);
}