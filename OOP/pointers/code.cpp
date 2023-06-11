#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;
    public: 
     void getData() {
        cout<<"the real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
     }

     void putData(int a, int b) {
        real = a;
        imaginary = b;
     }
};

int main() {
    Complex c1;
    // Complex *ptr = &c1; 
    Complex *ptr = new Complex;
    // (*ptr).putData(2, 15); is same as
    ptr->putData(2, 15);
    // (*ptr).getData(); is as good as 
    ptr->getData();


    // array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->putData(1, 4);
    ptr1->getData();
    return 0;
}