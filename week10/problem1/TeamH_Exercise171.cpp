#include <iostream>
#include <string>

using namespace std;

// Function Template
template <class T> void display(const T &text) {
  cout << "**********" << text << "**********" << endl;
}

// employee class
class Employee {
private:
  int id;
  string name;
  double payRate;

public:
  // parameterized constructor
  Employee(int i, string n, double rate) : id(i), name(n), payRate(rate) {}

  // operator overloading
  friend ostream &operator<<(ostream &os, const Employee &e) {
    os << "ID#: " << e.id << "  Name: " << e.name << "  Pay rate: $"
       << e.payRate;
    return os;
  }
};

int main() {
  // creating object
  Employee emp(8754, "John Doe", 25.5);

  // displaying output
  display(emp);

  return 0;
}
