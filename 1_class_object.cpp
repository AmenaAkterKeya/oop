#include <bits/stdc++.h>
using namespace std;
class ClassObject {
public:
    // Constructor
    ClassObject() {
        cout << "Constructor" << endl;
    }
    // Method
    void display() {
        cout << "Method" << endl;
    }
    // Destructor
    ~ClassObject() {
        cout << "Destructor" << endl;
    }

};

int main() {
    ClassObject obj;
    obj.display();
    return 0;
}
