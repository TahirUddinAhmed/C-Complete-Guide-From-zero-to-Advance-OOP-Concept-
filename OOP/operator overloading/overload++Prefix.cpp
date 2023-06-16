#include <bits/stdc++.h>
using namespace std;

class Counter {
private: 
  int n;
public:
  Counter(){ 
    n = 0;
  }
  Counter(int n) {
    this->n = n;
  }

  // prefix ++ overload with no return type
//   void operator ++() {
//     ++n;
//   }

    // prefix ++ overload with return type
    Counter operator++() {
        Counter temp;
        ++n;

        temp.n = n;
        return temp;
    }

  int getNum() {
    return n;
  }
};

int main() {
    Counter c1; // default constructor called n = 0
    cout<<"Before increment: "<<c1.getNum()<<endl;
    ++c1;
    cout<<"After increment: "<<c1.getNum()<<endl;
    


    return 0;
}