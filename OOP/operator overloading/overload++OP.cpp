#include <iostream>
using namespace std;

class Counter {
    int num;
public: 
    Counter() {
        num = 0;
    }
    Counter(int num) {
        this->num = num;
    }

    // prefix overload
    Counter& operator ++() {
        ++num;
        return *this;
    }

    // postfix overload
    Counter operator ++(int) {
        Counter temp = *this;
        ++num;

        return temp;
    }
    void result() {
        cout<<"Value of number is "<<num<<endl;
    }

};

int main() {
    Counter c1(5);
    ++c1;
    c1.result();

    Counter c2;
    c2 = c1++;
    c2.result();

    c1.result();
    return 0;
}