#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Declaring the variable
	string sourceFileName, targetFileName;
	ifstream sourceFile;
	ofstream targetFile;
	char ch;

	// Prompting the user for the source file name
	cout << "Enter a source file name: ";
	getline(cin, sourceFileName);

	// Prompting the user for the target file name
	cout << "Enter a target file name: ";
	getline(cin, targetFileName);

	// Opening the source file
	sourceFile.open(sourceFileName);

	// Checking if the source file was opened successfully
	if (!sourceFile.is_open()) {
		cout << "Error: Could not open the source file: " << sourceFileName << endl;
	} else {
		// Opening the target file
		targetFile.open(targetFileName);

		// Copying the contents character by character
		while (sourceFile.get(ch)) {
			targetFile.put(ch);
		}

		// Closing the files
		sourceFile.close();
		targetFile.close();

		cout << "Copy Done" << endl;
	}

	return 0;
}