#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Defining the variables
	string fileName;
	ifstream inputFile;

	cout << "Enter the file name: ";
	getline(cin, fileName);

	inputFile.open(fileName, ios::binary | ios::in);

	if (!inputFile.is_open()) {
		cout << "Error: Could not open the file: " << fileName << endl;
	} else {
		// Go to end to start reading backwards
		inputFile.seekg(0, ios::end);
		long long fileSize = inputFile.tellg();

		int lineCount = 0;
		char ch;
		long long currentPos = fileSize - 1;

		// Count lines from the end
		while (currentPos > 0 && lineCount < 10) {
			currentPos--;

			inputFile.seekg(currentPos);
			char ch;
			inputFile.get(ch);

			if (ch == '\n') {
				lineCount++;
			}
		}

		if (lineCount == 0) {
			cout << "The file is empty." << endl;
		} else {
			// currentPos == 0 means there are < 10 lines in the file
			if (currentPos == 0) {
				cout << "Displaying the entire file" << endl;
			} else {
				inputFile.seekg(currentPos + 1); // Move just after the newline
				cout << "Displaying the last 10 lines of the file:" << endl;
			}

			while (inputFile.get(ch)) {
				cout << ch;
			}

			cout << endl;
		}

		inputFile.close();
	}

	return 0;
}