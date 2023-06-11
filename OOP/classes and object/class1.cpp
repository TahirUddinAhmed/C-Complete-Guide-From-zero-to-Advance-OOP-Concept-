#include <iostream>
using namespace std;

class Emptclass {
 // empty  class

};

class Test {
    public:
     int a;
     int b;
};

int main() {
    Emptclass empt;

    cout<<"Size of a empty class " << sizeof(empt) << endl;

    // creation of object
    Test t = {10, 20};

    cout<<endl;
    cout<<"value of a and b is "<<t.a<<", "<<t.b<<endl;

    return 0;
}