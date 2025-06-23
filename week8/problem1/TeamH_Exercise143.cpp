#include "Job.cpp"
#include <iostream>

using namespace std;

int main() {
	Job job1, job2;

	// taking input
	cin >> job1;
	cin >> job2;

	// outputting the program
	cout << "The difference between " << job1 << endl;
	cout << " and " << job2 << endl;
	cout << " is " << job1 - job2 << " hours" << endl;

	cout << "The sum of " << job1 << endl;
	cout << " and " << job2 << endl;
	cout << " is " << job1 + job2 << " hours" << endl;

	return 0;
}
