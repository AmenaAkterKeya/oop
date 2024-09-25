#include <bits/stdc++.h>

using namespace std;
class Animal {
public:
   
    void dog(int x)
    {
        cout << "Woof!" << endl;
    }
    void dog(double x)
    {
        cout << "Bark!" <<endl;
    }

};

int main()
{
    Animal speak;
    speak.dog(2);
    speak.dog(2.22)
    return 0;
}