#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int *ptr = &a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptr<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<ptr<<endl;
    cout<<"The address of ptr is "<<&ptr<<endl;
    return 0;
}