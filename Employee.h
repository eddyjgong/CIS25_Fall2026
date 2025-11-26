#ifndef Employee_h
#define Employee_h

#include "User.h"

class Employee : public User {
public:
    Employee() {
        cout << "Employee Access Created." << endl;
    }
    void accessLevel() override {
        cout << "Employee Access Level." << endl;
    }
    ~Employee() {
        cout << "Employee Access Deleted." << endl;
    }
};

#endif