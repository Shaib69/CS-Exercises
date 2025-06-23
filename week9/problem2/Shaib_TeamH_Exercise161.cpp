#include <iostream>
#include <string>

using namespace std;

// exception classes
class invalidHr {};
class invalidMin {};
class invalidSec {};

int main() {
	int hours, minutes, seconds;
	string ampm;

	// validating hours
	while (true) {
		cout << "Enter hours: ";
		cin >> hours;

		try {
			if (hours < 0 || hours > 12) {
				throw invalidHr();
			}
			break;
		} catch (invalidHr) {
			cout << "The value of hr must be between 0 and 12." << endl;
		}
	}
	cout << endl;

	// validating minutes
	while (true) {
		cout << "Enter minutes: ";
		cin >> minutes;

		try {
			if (minutes < 0 || minutes > 59) {
				throw invalidMin();
			}
			break;
		} catch (invalidMin) {
			cout << "The value of minutes must be between 0 and 59." << endl;
		}
	}
	cout << endl;

	// validating seconds
	while (true) {
		cout << "Enter seconds: ";
		cin >> seconds;

		try {
			if (seconds < 0 || seconds > 59) {
				throw invalidSec();
			}
			break;
		} catch (invalidSec) {
			cout << "The value of seconds must be between 0 and 59." << endl;
		}
	}
	cout << endl;

	// getting AM/PM
	cout << "Enter AM or PM: ";
	cin >> ampm;

	cout << endl;

	// converting to 24hour standards
	if (ampm == "am" || ampm == "AM") {
		if (hours == 12) {
			hours = 0;
		}
	} else if (ampm == "pm" || ampm == "PM") {
		if (hours != 12)
			hours += 12;
	}

	// output
	cout << "24 hour clock time: " << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}