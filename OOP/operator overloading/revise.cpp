#include <iostream>
using namespace std;

class Test {
    int a;
    public: 
     void get() {
        cin>>a;
     }

     void operator +(Test t2) {
        cout<<a+t2.a<<endl;
     }
     void operator -(Test t2) {
        cout<<a-t2.a<<endl;
     }

};

int main() {
    Test t1, t2;
    cout<<"Enter the first number: ";
    t1.get();
    cout<<"Enter the second number: ";
    t2.get();

    cout<<"Addition: "<<endl;
    t1 + t2;
    cout<<"Subtraction: "<<endl;
    t1 - t2;
    return 0;
}
