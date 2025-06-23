#include <iostream>
#include <string>

using namespace std;

// exception classes
class invalidHr : public exception {
public:
	invalidHr(string exceptionMessage) : message(exceptionMessage) {}

	virtual const char *what() {
		return message.c_str();
	}

private:
	string message;
};

class invalidMin : public exception {
public:
	invalidMin(string exceptionMessage) : message(exceptionMessage) {}

	virtual const char *what() {
		return message.c_str();
	}

private:
	string message;
};

class invalidSec : public exception {
public:
	invalidSec(string exceptionMessage) : message(exceptionMessage) {}

	virtual const char *what() {
		return message.c_str();
	}

private:
	string message;
};

class invalidAmPm : public exception {
public:
	invalidAmPm(string exceptionMessage) : message(exceptionMessage) {}

	virtual const char *what() {
		return message.c_str();
	}

private:
	string message;
};

int main() {
	int hours = -1, minutes = -1, seconds = -1;
	string ampm;

	// validating hours
	while (hours < 0 || hours > 12) {
		try {
			cout << "Enter hours: ";
			cin >> hours;

			if (hours < 0) {
				throw invalidHr("The value of hr must be between larger than 0");
			}

			if (hours > 12) {
				throw invalidHr("The value of hr must be between less than 12");
			}
		} catch (invalidHr& exception) {
			cout << exception.what() << endl;
		}
	}
	cout << endl;

	// validating minutes
	while (minutes < 0 || minutes > 59) {
		try {
			cout << "Enter minutes: ";
			cin >> minutes;

			if (minutes < 0 || minutes > 59) {
				throw invalidMin("The value of minutes must be between 0 and 59.");
			}
		} catch (invalidMin& exception) {
			cout << exception.what() << endl;
		}
	}
	cout << endl;

	// validating seconds
	while (seconds < 0 || seconds > 59) {
		try {
			cout << "Enter seconds: ";
			cin >> seconds;

			if (seconds < 0 || seconds > 59) {
				throw invalidSec("The value of seconds must be between 0 and 59.");
			}
		} catch (invalidSec& exception) {
			cout << exception.what() << endl;
		}
	}
	cout << endl;

	// validating AM/PM
	while (ampm != "am" && ampm != "AM" && ampm != "pm" && ampm != "PM") {
		try {
			cout << "Enter AM or PM: ";
			cin >> ampm;

			if (ampm != "am" && ampm != "AM" && ampm != "pm" && ampm != "PM") {
				throw invalidAmPm("The value of ampm must be am or pm.");
			}
		} catch (invalidAmPm& exception) {
			cout << exception.what() << endl;
		}
	}
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