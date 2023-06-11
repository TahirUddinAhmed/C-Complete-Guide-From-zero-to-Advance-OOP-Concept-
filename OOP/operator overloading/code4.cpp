// overloading + operator
#include <iostream>
#include <string.h>
using namespace std;

class Test {
    char st[100];
    public: 
    void read() {
        cout<<"Enter string: ";
        cin>>st;
    }
    void show() {
        cout<<"String = "<<st<<endl;
    }


    Test operator +(Test t2) {
        Test t3;

       strcpy(t3.st, st); // t1.st is copied to t3.st 
        strcat(t3.st, " "); // a blank space is added to t3
        strcat(t3.st, t2.st);

       return t3;
    }

};


int main() {
    Test t1, t2, t3;

    t1.read();
    t2.read();
    t3 = t1 + t2;
    t3.show();
    return 0;
}