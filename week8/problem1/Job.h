#ifndef JOB_H
#define JOB_H

#include <iostream>

class Job {
private:
	int jobNumber;
	int hoursTillComp;
	double ratePerHour;

public:
	// constructor
	Job(int number = 0, int htc = 0, double rate = 0.0)
	    : jobNumber(number), hoursTillComp(htc), ratePerHour(rate) {}

	// getter functions
	int getJobNumber() const { return jobNumber; }
	int getHoursToComplete() const { return hoursTillComp; }
	double getPerHourRate() const { return ratePerHour; }

	// friend declarations for non member overloading
	friend std::ostream& operator<<(std::ostream& os, const Job& job);
	friend std::istream& operator>>(std::istream& is, Job& job);

	// member overloading
	int operator+(const Job& other) const;
	int operator-(const Job& other) const;
};

#endif
