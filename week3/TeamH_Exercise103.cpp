#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Enter a sentence with no spaces between the words" << endl;
	cout << "and the first letter of each word capitalized." << endl;
	cout << "(Example: StopAndSmellTheRoses):" << endl;

	// * Defining the variables.
	string sentence;

	// * Getting the user input.
	cin >> sentence;

	// * We starts from 1, because we want to keep the first character of the
	// first word Uppercase.
	for (int i = 1; i < sentence.length(); ++i) {
		char chr = sentence[i];
		if (isupper(chr)) {
			sentence[i] = tolower(chr);
			// * Insert a space before the word.
			sentence.insert(i, " ");
		}
	}

	cout << "output => " << sentence << endl;

	return 0;
}