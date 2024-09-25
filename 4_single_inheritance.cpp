#include <bits/stdc++.h>
using namespace std;
class Company {
public:
    string name;
    int id;
    Company(string emp_name, int emp_id) {
        name = emp_name;
        id = emp_id;
    }
    void display() {
        cout << "Employee Name: " << name << " and Employee Id: " << id << endl;
    }
    
};
class Employee : public Company {
public:
    Employee(string emp_name, int emp_id) : Company(emp_name, emp_id) {}
};
int main(){

    Employee obj("Gray", 23143);
    obj.display();
    return 0;
}
