#ifndef User_h
#define User_h

#include <iostream>
using namespace std;

class User {
public:
    User() {
        cout << "Customer Access Created." << endl;
    }
    virtual void accessLevel() {
        cout << "Customer Access Level." << endl;
    }
    ~User() {
        cout << "Customer Access Deleted." << endl;
    }
};

#endif