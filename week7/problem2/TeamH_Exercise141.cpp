#include <iostream>
#include <string>

using namespace std;

class Salesperson;

class Sale {
private:
	int month, day, year;
	double amount;
	int salespersonID;

public:
	Sale(int m, int d, int y, double a, int id)
	    : month(m), day(d), year(y), amount(a), salespersonID(id) {}

	friend void display(const Sale& sale, const Salesperson& sp);
};

class Salesperson {
private:
	int id;
	string lastName;

public:
	Salesperson(int i, string ln) : id(i), lastName(ln) {}

	friend void display(const Sale& sale, const Salesperson& sp);
};

// Friend function
void display(const Sale& sale, const Salesperson& sp) {
	cout << "Sale #" << sale.salespersonID << " on " << sale.month << "/"
	     << sale.day << "/" << sale.year << " for $" << sale.amount
	     << " sold by #" << sp.id << " " << sp.lastName << endl;
}

int main() {
	Sale sale1(12, 25, 2016, 559.95, 103);
	Salesperson sp1(103, "Woods");

	Sale sale2(11, 15, 2016, 359.95, 106);
	Salesperson sp2(106, "Hansen");

	display(sale1, sp1);
	display(sale2, sp2);

	return 0;
}