// Constructors and Destructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Product {
private:
	int ID;
	string Name;
	double Price;

public:
	Product(int id, string name, double price) {
		ID = id;
		Name = name; 
		Price = price;
	}

	~Product() {
		cout << "Destructor initiated: " << Name << endl;
 	}

	void printDetails() {
		cout << "Product ID: " << ID << endl << "Product Name: " << Name << endl << "Product Price: $" << Price << endl << endl;
	}
};

int main()
{
	Product item1(1, "Candy", 0.99);
	Product item2(2, "Chocolate", 1.99);
	Product item3(3, "Chips", 2.99);

	item1.printDetails();
	item2.printDetails();
	item3.printDetails();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
