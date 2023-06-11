// Program to overload a unary operator
#include <iostream>
using namespace std;

class Test {
    int n;
    public:
    Test(int n) {
        this->n = n;
    }

    void operator ++() {
        n += 1;
    }

    void show() {
        cout<<"Value of the number is "<<n<<endl;
    }
};

int main() {
 // instantiate an object of class Test
 Test t1(12);
 ++t1;
 t1.show();
 return 0;
}