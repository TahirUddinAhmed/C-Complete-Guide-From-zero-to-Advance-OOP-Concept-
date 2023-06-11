// overload binary operators
// overload comparision operators (==, >)
#include <iostream>
using namespace std;

class Test {
    int a;
public: 
    // get the data
    void get() {
        cin>>a;
    }

    void compare(Test t2) {
        if(a==t2.a) {
            cout<<"Objects are equal"<<endl;
        } else {
            cout<<"Object are not equal"<<endl;
        }
    }

    // overloading == operator
    void operator ==(Test t2) {
        if(a == t2.a) {
            cout<<"Objects are equal"<<endl;
        } else {
            cout<<"Objects are not equal"<<endl;
        }
    }

    //overloading > operator
    void operator >(Test t2) {
        if(a > t2.a) {
            cout<<a<<" is greater then "<<t2.a<<endl;
        } else {
            cout<<a<<" is not greater then "<<t2.a<<endl;
        }
    }
};

int main() {
    Test t1, t2;
    cout<<"Enter t1 object a value:";
    t1.get();
    cout<<"Enter t2 object a value:";
    t2.get();

    // t1.compare(t2);

    t1 == t2;
    t1 > t2;


    return 0;
}