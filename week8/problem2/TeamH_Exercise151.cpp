#include <iostream>
#include <string>

using namespace std;

// Base class
class Book {
protected:
	string title;
	string author;

public:
	Book(const string& t, const string& a) : title(t), author(a){};

	void displayData() const {
		cout << "Book is " << title << " by " << author << endl;
	}
};

// Deriving the base class for fiction
class Fiction : private Book {
private:
	int gradeLevel;

public:
	Fiction(const string& t, const string& a, int level) : Book(t, a), gradeLevel(level) {} // constructor

	void displayFictionData() const {
		displayData();
		cout << "Reading level is " << gradeLevel << endl;
	}
};

// Deriving the base class for nonfiction
class NonFiction : private Book {
private:
	int numpages;

public:
	NonFiction(const string& t, const string& a, int pages) : Book(t, a), numpages(pages) {} // constructor

	void displayNonFictionData() const {
		displayData();
		cout << numpages << " pages" << endl;
	}
};

// Main function
int main() {
	Fiction fictionBook("Scarlet Letter", "Hawthorne", 10);
	fictionBook.displayFictionData();

	NonFiction nonFictionBook(" Log Cabin Building", "Landers", 328);
	nonFictionBook.displayNonFictionData();

	return 0;
}