#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    cout<<"\ninside function before swap a : "<<x << " b : " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"\ninside function after swap a : "<<x << " b : " << y;
}

int main() {
    int a = 5, b = 7;
    cout<<"\noutside function before swap a : "<<a << " b : " << b;
    swap(a, b); 
    cout<<"\noutside function after swap a : "<<a << " b : " << b; // output: 6, as the original value has been changed by the function
    return 0;
}