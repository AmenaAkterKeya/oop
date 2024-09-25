#include <bits/stdc++.h>
using namespace std;

class School {
public:
    string name;

    School(string name) {
        this->name = name;
    }

    void display() {
        cout << "School Name: " << name << endl;
    }
};

class Classes : public School {
public:
    int cls;

    Classes(string name, int cls)
        : School(name), cls(cls) {}

    void displayClass() {
        cout << "Class: " << cls << endl;
    }
};

class Student : public Classes {
public:
    string std_name;

    Student(string name, int cls, string std_name)
        : Classes(name, cls), std_name(std_name) {}

    void displayStudent() {
        cout << "Student Name: " << std_name << endl;
    }
};

int main() {
    Student my_student("Redford High", 10, "Alice");
    my_student.display();
    my_student.displayClass();  
    my_student.displayStudent(); 

    return 0;
}
