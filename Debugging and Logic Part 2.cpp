// Debugging and Logic Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;
    cout << "Enter 3 numbers with a space in between each number." << endl;
    cin >> n1 >> n2 >> n3;
    cout << endl;

    if (n1 > n2) {
        if (n1 > n3) {
            cout << "The largest number is " << n1 << "." << endl;
        }
    }
    if (n2 > n1) {
        if (n2 > n3) {
            cout << "The largest number is " << n2 << "." << endl;
        }
    }
    if (n3 > n1) {
        if (n3 > n2) {
            cout << "The largest number is " << n3 << "." << endl;
        }
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
