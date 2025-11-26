#ifndef InventoryManager_h
#define InventoryManager_h

#include "Employee.h"

class InventoryManager : public Employee {
public:
    InventoryManager() {
        cout << "Inventory Manager Access Created." << endl;
    }
    void accessLevel() override {
        cout << "Inventory Manager Access Level." << endl;
    }
    ~InventoryManager() {
        cout << "Inventory Manager Access Deleted." << endl;
    }
};

#endif