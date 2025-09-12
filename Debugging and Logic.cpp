// Debugging and Logic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int option;
    cout << "Welcome to McDonald's, what would you like to order?" << endl;
    cout << "\t1. Big Mac" << endl;
    cout << "\t2.French Fries" << endl;
    cout << "\t3. Chicken Nuggets" << endl;
    cout << "\t4. None" << endl;
    cin >> option;
    cout << endl;
    if (option == 1) {
        cout << "You have ordered a Big Mac." << endl;
    }
    else if (option == 2) {
        cout << "You have ordered French Fries." << endl;
    }
    else if (option == 3) {
        cout << "You have ordered Chicken Nuggets." << endl;
    }
    else if (option == 4) {
        cout << "Have a great rest of your day." << endl;
    }
    else {
        cout << "That is not a valid option." << endl;
    }
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
