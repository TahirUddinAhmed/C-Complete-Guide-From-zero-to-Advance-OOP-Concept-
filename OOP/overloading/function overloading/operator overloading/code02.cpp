// overload + and - operator
#include <iostream>
using namespace std;

class Test {
    int a;
    char ch;
public: 
    void getA() {
        cin>>a;
    }
    void getCh() {
        cin>>ch;
    }

    // overload + operator
    void operator +(Test t2) {
       cout<<a+t2.a<<endl;
    }
};

int main() {
  Test t1, t2;
  cout<<"enter the value of obj1: ";
  t1.getA();
  cout<<"enter the value of obj2: ";
  t2.getA();


  t1 + t2;

  return 0;
}