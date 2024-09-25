#include <bits/stdc++.h>
using namespace std;

class Company {
public:
    string name;
    int id;

    Company(string name, int id) {
        this->name = name;
        this->id = id;
    }

    void display() {
        cout << "Employee Name: " << name << " and Employee Id: " << id << endl;
    }
};

class Employee : public Company {
public:
    Employee(string name, int id)
        : Company(name, id) {}  
};

int main() {
    Employee obj("Gray", 23143);
    obj.display();

    return 0;
}