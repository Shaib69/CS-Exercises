#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Structure Declaration
struct MovieData {
	string title;           // Title of the movie
	string director;        // Name of the director
	int year;               // Year of release
	int runTime;            // Movie runtime
	double productionCosts; // Production budget for the movie
	double
	    firstYrRevenue; // The overall revenue of the film after 1 year of release
};

// Function Prototypes
void displayData(MovieData); // Created to calculate and display data

// Defining the main function
int main() {

	MovieData movie1 = {
	    "War of the Worlds", "Byron Haskin", 1953, 88, 15000000, 28000000};
	MovieData movie2 = {
	    "War of the Worlds", "Stephen Spielberg", 2005, 118, 22000000, 14000000};

	displayData(movie1);
	cout << endl;
	displayData(movie2);

	return 0;
}

// Defining the displayData function
void displayData(MovieData movie) {

	double profit = movie.firstYrRevenue - movie.productionCosts;

	cout << endl;

	cout << "Title       : " << movie.title << endl;
	cout << "Director    : " << movie.director << endl;
	cout << "Released    : " << movie.year << endl;
	cout << "Running Time: " << movie.runTime << " minutes" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Production cost: $" << movie.productionCosts << endl;
	cout << "First year revenue: $" << movie.firstYrRevenue << endl;

	if (profit < 0)
		cout << "First year loss: $" << profit << endl;

	else
		cout << "First year profit: $" << profit << endl;
}