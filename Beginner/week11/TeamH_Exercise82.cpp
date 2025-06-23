#include <iostream>
using namespace std;

// Function Prototypes
void selectionSort(int[], int);
void display(int[], int);

int main() {
	// Creating the array and initializing it
	const int SIZE = 8;
	int data[SIZE] = {23, 0, 45, -3, -78, 1, -1, 9};

	// Displaying the unsorted array
	cout << "\nUnsorted array: ";
	display(data, SIZE);

	// Sorting the unsorted array
	selectionSort(data, SIZE);

	// Displaying sorted array
	cout << "Sorted array: ";
	display(data, SIZE);

	return 0;
}

// Defining selectionSort
void selectionSort(int array[], int size) {
	int startSorting, minIndex, minValue;

	for (startSorting = 0; startSorting < (size - 1); startSorting++) {
		minIndex = startSorting;
		minValue = array[startSorting];
		for (int index = startSorting + 1; index < size; index++) {
			if (array[index] < minValue) {
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startSorting];
		array[startSorting] = minValue;
	}
}

// Defining display
void display(int array[], int size) {
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}