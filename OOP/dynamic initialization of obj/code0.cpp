#include <iostream>
using namespace std;

class Test {
    int x;
    int y;
public: 
    Test() {
        cout<<"Hello, world!"<<endl;
    }
    Test(int x, int y) {
        this->x =  x;
        this->y = y;

        cout<<"Value of x is "<<x<<endl;
        cout<<"Value of y is "<<y<<endl;
    }
};

int main() {
    Test* t  = new Test();

    Test* m = new Test(5, 2);
    return 0;
}