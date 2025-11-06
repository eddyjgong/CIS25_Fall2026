// Inventory Management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Item {
private:
    string name;
    int quantity;

public:
    void item(string n, int q) {
        name = n;
        quantity = q;
    }

    void display() const {
        cout << "Item: " << name << ", Quantity: " << quantity << endl;
    }
    string getName() const { return name; }
    int getQuantity() const { return quantity; }
};

bool compareName(const Item& a, const Item& b) {
    return a.getName() < b.getName();
}
void search(Item items[], int size, string name) {
    int low = 0;
    int high = size - 1;
    bool found = false;
    while (low <= high) {
        int mid = (low + high) / 2;
        string midName = items[mid].getName();
        if (midName == name) {
            cout << "Found: " << name << " with quantity: " << items[mid].getQuantity() << endl;
            found = true;
            break;
        }
        else if (midName < name) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (!found) {
        cout << "Item " << name << " was not found in the inventory. " << endl;
    }
}


int main()
{
    const int size = 5;
    Item inventory[size];
    cout << "Please enter the name and quantity for each item." << endl;
    for (int i = 0; i < size; i++) {
        string name;
        int quantity;
        cout << "Item " << (i + 1) << " name: ";
        cin >> name;
        cout << "Item " << (i + 1) << " quantity: ";
        cin >> quantity;
        while (quantity < 0) {
            cout << "Please pick a number >= 0. " << endl;
            cin >> quantity;
        }
        inventory[i].item(name, quantity);
        cout << endl;
    }
    sort(inventory, inventory + size, compareName);
    cout << endl << "Sorted Inventory List: " << endl << endl;
    for (int i = 0; i < size; ++i) {
        inventory[i].display();
    }
    cout << "Enter the name of an item to search for it: " << endl;
    string searchName;
    cin >> searchName;
    search(inventory, size, searchName);
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
