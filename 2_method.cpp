#include <bits/stdc++.h>
using namespace std;
class MethodFun {
public:
   
    void (*value)();
    MethodFun() : value(nullptr) {}
};


void display() {
    cout << "Method" << endl;
}

int main() {
    MethodFun obj; 
    obj.value = display; 
    obj.value(); 

    return 0;
}
