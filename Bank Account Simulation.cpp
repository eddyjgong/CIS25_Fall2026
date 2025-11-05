// Bank Account Simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount() {
        balance = 0.00;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "You have deposited $" << amount << " and now have a balance of $" << balance << endl << endl;
        fstream MyFile("transactions.txt", ios::app);
        MyFile << "Deposited Amount: $" << amount << " | " << "New Balance: $" << balance << endl;
        MyFile.close();
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "You cannot withdraw $" << amount << ", " << "because you only have $" << balance << endl << endl;
            fstream MyFile("transactions.txt", ios::app);
            MyFile << "Withdrawal of $" << amount << " has failed. | " << "Balance: $" << balance << endl;
            MyFile.close();
            return;
        }
        balance -= amount;
        cout << "You have withdrawn $" << amount << " and now have a balance of $" << balance << endl << endl;
        fstream MyFile("transactions.txt", ios::app);
        MyFile << "Withdrawn Amount: $" << amount << " | " << "New Balance: $" << balance << endl;
        MyFile.close();
    }

    void purchase(string item, double cost, int quantity) {
        double totalCost = cost * quantity;
        if (totalCost > balance) {
            cout << "This purchase of " << quantity << " " << item << " cannot be completed at this time. The total cost $" << totalCost << " exceeds your balance of $" << balance << endl << endl;
            fstream MyFile("transactions.txt", ios::app);
            MyFile << "Failed purchase of " << quantity << " " << item << " for $" << totalCost << endl;
            MyFile.close();
            return;
        }
        balance -= totalCost;
        cout << "You have purchased " << quantity << " " << item << " for $" << totalCost << endl << endl;
        fstream MyFile("transactions.txt", ios::app);
        MyFile << "Purchased " << quantity << " " << item << " for $" << totalCost << endl;
        MyFile.close();
    }

    void transactionHistory() {
        cout << "Here is your transaction history: " << endl << endl;
        fstream MyFile("transactions.txt", ios::in);
        if (!MyFile) {
            cout << "You do not have access to this information. " << endl;
            return;
        }
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;
        }
        MyFile.close();
        cout << endl << endl;

    }

    void displayBalance() {
        cout << "Your current balance is: $" << balance << "." << endl << endl;
        string response;
        cout << "Would you like to see your transaction history? (yes or no)" << endl;
        cin >> response;
        if (response == "yes") {
            transactionHistory();
        }
        if (response == "no") {
            cout << "You have opted to not see your transaction history." << endl;
        }
        if (response != "yes" && response != "no")
            cout << "Invalid response." << endl;
    }
};

int main()
{
    BankAccount myAccount;
    myAccount.deposit(50);
    myAccount.withdraw(20);
    myAccount.withdraw(100);
    myAccount.transactionHistory();
    myAccount.purchase("Cereal", 2.75, 1);
    myAccount.purchase("Cereal", 2.75, 2);
    myAccount.purchase("Cereal", 2.75, 100);
    myAccount.displayBalance();
    myAccount.transactionHistory();
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
