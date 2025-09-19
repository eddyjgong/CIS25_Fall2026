// Functions and Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showMenu() {
    cout << "Please choose a number between 1 and 3. Your options are: " << endl;
    cout << endl;
    cout << "1. Add item." << endl;
    cout << "2. View item." << endl;
    cout << "3. Exit." << endl;
    cout << endl;
}

int main()
{
    int option;
    do {
        showMenu();
        cin >> option;
        if (option > 3 || option < 1) {
            cout << "Please pick a number between 1 and 3." << endl << endl;
        }
    } while (option != 3);
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
