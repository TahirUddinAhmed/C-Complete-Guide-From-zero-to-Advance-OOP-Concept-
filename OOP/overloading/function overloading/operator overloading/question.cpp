// write a program to show how operator overloading is done.
#include <iostream>
#include <cstring>
using namespace std;

class Test {
    char name[100];

public: 
   void setData() {
    cout<<"Enter your name: ";
    cin>>name;
   }

   Test operator +(Test t2) {
    Test t3;
    strcpy(t3.name, name); 
    strcat(t3.name, " ");
    strcat(t3.name, t2.name);

    return t3;
   }

   void display() {
    cout<<name<<endl;
   }
};

int main() {
    Test t1, t2, t3;
    t1.setData(); // get data for object t1
    t2.setData(); // get data for object t2

    t3 = t1 + t2;

    t3.display();

    return 0;
}