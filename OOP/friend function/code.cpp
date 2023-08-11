#include <iostream>
using namespace std;

class test2; // forward declaration

class test1 {
    int a;
public: 
    test1(int a) {
        this->a = a;
    }

    friend void big(test1, test2);
};

class test2 {
    int b;

public: 
    test2(int b) {
        this->b = b;
    }

    friend void big(test1, test2);
};

void big(test1 t1, test2 t2) {
    if(t1.a > t2.b) {
        cout<<t1.a<<" is big"<<endl;
    } else if(t1.a < t2.b) {
        cout<<t2.b<<" is big"<<endl;
    } else {
        cout<<"Both are equal";
    }
}

int main() {
    test1 t1(5);
    test2 t2(6);

    big(t1, t2);
    return 0;
}