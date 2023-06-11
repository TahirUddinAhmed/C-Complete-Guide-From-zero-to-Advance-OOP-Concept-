#include <iostream>
using namespace std;

class circle {
    float r;
    public:
     circle() {
        r = 5;
     }
     circle(float r) {
        (*this).r = r;
     }

     void showArea() {
        cout<<"Area is "<<3.14*r*r<<endl;
     }

};

int main() {
    circle c1;
    c1.showArea();
    circle c2(12);
    c2.showArea();
    return 0;
}

// constructor overloading is nothing but declaring more constructor 
// within the same class