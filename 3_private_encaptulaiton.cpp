#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int id; 
    string name;
    double salary;

public:
  
    Employee(int empId, string empName, double empSalary) {
        id = empId; 
        name = empName;
        salary = empSalary;
    }

   
    int getId()  {
        return id;
    }


    string getName()  {
        return name;
    }

    double getSalary()  {
        return salary;
    }

    void display()  {
        cout << name << " salary " << salary << endl;
    }
};

int main() {
    Employee obj(5212, "John's", 50000);
    obj.display();
    cout << obj.getId() << endl; 

    return 0;
}
