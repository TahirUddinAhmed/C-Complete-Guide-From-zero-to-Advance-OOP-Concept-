// overload + operator to add two strings
#include <iostream>
#include <cstring>
using namespace std;

class Test {
  char str[100];
public: 
  void read() {
    cout<<"Enter a string : ";
    cin>>str;
  }

  void display() {
    cout<<str<<endl;
  }

  Test operator +(Test t2) {
    Test t3;
    strcpy(t3.str, str);
    strcat(t3.str, " ");
    strcat(t3.str, t2.str);

    return t3;
  }
};

int main() {
    Test t1, t2, t3;

    t1.read();
    t2.read();

    t3 = t1 + t2;

    t3.display();
    return 0;
}