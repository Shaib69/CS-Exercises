#include <iomanip>
#include <iostream>
using namespace std;

// Function prototypes
void sort(double scores[], int testQuantity);
double calcavg(double scores[], int testQuantity);

int main() {

	// Defining the variables
	int testQuantity;
	double *scores = nullptr, avg;

	cout << "How many test scores will you enter? ";
	cin >> testQuantity;

	// Validating UserInput
	while (testQuantity < 1) {
		cout
		    << "The number of tests scores must be greater than 0. Please enter a ";
		cout << "valid number of test scores" << endl;
		cout << "How many test scores will you enter? ";
		cin >> testQuantity;
	}

	scores = new double[testQuantity];

	// Storing the scores input into the dynamic array
	for (int i = 0; i < testQuantity; i++) {
		cout << "Enter test score " << i + 1 << ": ";
		cin >> *(scores + i);

		// Validating the Input
		if (*(scores + i) < 0) {
			cout << "Negative scores are not allowed.\n";
			cout << "Enter another score for this test: ";
			cin >> *(scores + i);
		}
	}
	// Calling function sort to sort the values stored in the dynamic array
	sort(scores, testQuantity);

	cout << "\nThe test scores in ascending order, and their average, are:"
	     << endl
	     << endl;
	cout << "Score\n-----" << endl
	     << endl;

	// Formating sorted output
	cout << fixed << showpoint << setprecision(2);

	// Outputting the sorted test Scores
	for (int i = 0; i < testQuantity; i++) {
		cout << *(scores + i) << endl;
	}

	// Calculating the average
	avg = calcavg(scores, testQuantity);

	// Outputting the average score
	cout << endl
	     << "Average score:  " << avg << endl;

	// Deallocating the Dynamic Memory
	delete[] scores;

	return 0;
}

// Defining the average function
double calcavg(double scores[], int testQuantity) {

	// Defining the variables
	double sum = 0, average;

	// Calculating the average and returning it
	for (int i = 0; i < testQuantity; i++) {
		sum += *(scores + i);
	}
	average = sum / testQuantity;

	return average;
}

// Defining the Sorting function
void sort(double scores[], int testQuantity) {

	// Defining the variables
	int i, minIndex;
	double minValue;

	for (i = 0; i < testQuantity - 1; i++) {
		minIndex = i;
		minValue = *(scores + i);

		for (int j = i + 1; j < testQuantity; j++) {
			if (*(scores + i) < minValue) {
				minValue = *(scores + i);
				minIndex = j;
			}
		}
		*(scores + minIndex) = *(scores + i);
		*(scores + i) = minValue;
	}
}
