/*
This program will reads the numbers contained in the Input.txt file and writes
only the even numbers to a new sequential access file named Output.txt.

 TEAM H MEMBERS
 - LE, DUC ANH TUAN (CWID: 20660170)
 - Shaib, Hassan Alvi (CWID: 20615179)
*/

#include <fstream>
#include <iostream>
using namespace std;

int main() {
	// Defining the Variables
	ifstream inputFile;
	ofstream outputFile;
	int read;

	// Open the input file
	inputFile.open("Input.txt");
	outputFile.open("Output.txt");

	if (!inputFile) {
		cout << "Error: File cannot be opened!" << endl;
	} else {
		cout << "Reading data from the file." << endl;

		// Read from the input file and write to the output file.
		while (!inputFile.eof()) {
			inputFile >> read;
			if (read % 2 == 0) {
				outputFile << read << endl;
			}
		}

		// Close the file.
		inputFile.close();
		outputFile.close();
	}

	return 0;
}