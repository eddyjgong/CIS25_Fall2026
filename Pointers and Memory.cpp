// Pointers and Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(int array[], int size, int search) {
    int lowest = 0;
    int highest = size - 1;
    int midpoint;
    while (lowest <= highest) {
        midpoint = (lowest + highest) / 2;
        if (search == array[midpoint]) {
            return midpoint;
        }
        else if (search > array[midpoint]) {
            lowest = midpoint + 1;
        }
        else {
            highest = midpoint - 1;
        }
    }
    return -1;
}

int main()
{
    const int size = 100;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    int id = 1;
    while (true) {
        cout << "Please enter the array element you would like to search for between 0 and 99: " << endl;
        cout << "If you enter 0, the program will end." << endl;
        cout << endl;
        cin >> id;
        if (id == 0) {
            cout << "You have decided to exit the program." << endl;
            break;
        }
        if (id < 0 || id > 100) {
            cout << endl;
            cout << "Please enter a number between 0 and 100." << endl;
            cout << endl;
            continue;
        }
        cout << endl;
        int index = binarySearch(array, size, id);
        if (index != -1) {
            cout << endl << "Your ID " << id << " was found at index " << index << "." << endl;
            cout << "The memory address of ID " << id << " is: " << &array[index] << endl;
            cout << endl;
        }
        else {
            cout << "Your ID " << id << " was not in the array." << endl;
        }
    }
    delete[] array;
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

