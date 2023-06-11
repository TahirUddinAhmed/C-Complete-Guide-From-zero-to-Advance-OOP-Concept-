#include <iostream>
using namespace std;

struct Base {
    int x;
};

struct Derived : Base {
    int y;
};

int main() {
    Derived d;
    d.x = 5; // Accessing the inherited member from Base
    d.y = 10;


    cout<<"Value of x: "<<d.x<<endl;
    cout<<"Value of y: "<<d.y<<endl;
    return 0;
}