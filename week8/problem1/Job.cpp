#include "Job.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, const Job& j) {
	os << "Job #" << j.jobNumber << " " << j.hoursTillComp;
	os << " hours at $ " << j.ratePerHour << " per hour";
	return os;
}
// definition of the stream extraction (input)
istream& operator>>(istream& is, Job& j) {
	cout << "Enter job number: ";
	is >> j.jobNumber;
	cout << "Hours to complete: ";
	is >> j.hoursTillComp;
	cout << "Rate per hour: ";
	is >> j.ratePerHour;
	return is;
}
// definition of the + operator (member function)
int Job::operator+(const Job& other) const {
	return this->hoursTillComp + other.hoursTillComp;
}

// definition of the - operator (member function)
int Job::operator-(const Job& other) const {
	return this->hoursTillComp - other.hoursTillComp;
}
