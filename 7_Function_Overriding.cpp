#include <bits/stdc++.h>
using namespace std;
class Animal {
public:
    virtual string speak() {
        return "Animal Sound";
    }
    virtual string food() {
        return "Animal Food";
    }
};
class Dog : public Animal {
public:
   string speak() override {
        return "Woof!";
    }
    string food() override {
        return "Eat Meat";
    }
};

class Cat : public Animal {
public:
    string speak() override {
        return "Meow!";
    }
    string food() override {
        return "Drink Milk";
    }
};
void animals(Animal* animal) {
    cout << animal->speak() << endl;
    cout << animal->food() << endl;
}
int main(){

    Dog dog;   
    Cat cat;   
    animals(&dog); 
    animals(&cat); 

    return 0;

}



