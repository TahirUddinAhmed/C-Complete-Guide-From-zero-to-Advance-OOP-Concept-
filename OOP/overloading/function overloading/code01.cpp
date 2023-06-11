#include <iostream>
#include "class.cpp" // include class.cpp
using namespace std;

int main() {
 Compare c;
 int a = 5, b = 2;
 float f1 = 12.87, f2 = 44.02;
 char p = 'A', q = 'X';


 int num1 = 1, num2 = 8, num3 = 4;

 cout<<c.findSmaller(a, b)<<endl;
 cout<<c.findSmaller(f1, f2)<<endl;
 cout<<c.findSmaller(p, q)<<endl;

 cout<<"Compare with parameters"<<endl;

 cout<<c.findSmaller(num1, num2, num3)<<endl;
 return 0;
}