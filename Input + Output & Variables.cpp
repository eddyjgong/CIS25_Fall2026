// Input + Output & Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    string item;
    cout << "What is the name of the item you are trying to purchase?" << endl;
    cin >> item;
    cout << endl;
    cout << "The item is " << item << "." << endl;
    double price;
    cout << "What's the price for " << item << "?" << endl;
    cout << "$";
    cin >> price;
    cout << endl;
    cout << "The price comes out to " << price << " per " << item << endl;
    int quantity;
    cout << "How many " << item << "s are you looking to purchase?" << endl;
    cin >> quantity;
    cout << endl;
    cout << "You are looking to purchase " << quantity << " of " << item << "s." << endl;
    cout << "Your total comes out to approximately $" << price * quantity << "." << endl;



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
