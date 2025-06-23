#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	// creating maps
	map<string, int> roomNumber =
		{
			{"CS101", 102},
			{"CS102", 103},
			{"CS103", 203},
			{"NT110", 204},
			{"CM241", 301}};

	map<string, string> instructor =
		{
			{"CS101", "West"},
			{"CS102", "Lee"},
			{"CS103", "Kim"},
			{"NT110", "Payne"},
			{"CM241", "Johnson"}};

	map<string, string> meetingTime =
		{
			{"CS101", "8:00 A.M."},
			{"CS102", "9:00 A.M."},
			{"CS103", "10:00 A.M."},
			{"NT110", "11:00 A.M."},
			{"CM241", "1:00 P.M."}};

	string userChoice;

	// Getting userinput
	cout << "Enter a course number to get information about that course: ";
	cin >> userChoice;

	// Checking if the course is valid
	if (roomNumber.find(userChoice) == roomNumber.end())
	{
		cout << "Invalid course" << endl;	
	}

	else {
	cout << "Room number: " << roomNumber[userChoice] << endl;
    cout << "Instructor: " << instructor[userChoice] << endl;
    cout << "Meeting time: " << meetingTime[userChoice] << endl;	
	}
	return 0;
}