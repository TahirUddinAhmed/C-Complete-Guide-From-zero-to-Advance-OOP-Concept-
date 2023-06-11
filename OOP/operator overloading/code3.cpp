// overload comparsion operator > or < 
#include <iostream>
using namespace std;

class Num {
    int a;
    public: 
     void get() {
        cin>>a;
     }

    void operator > (Num n2) {
      if(a > n2.a) {
        cout<<"object 1 is big"<<endl;
      } else {
        cout<<"Object 1 is small"<<endl;
      }
    }
};

int main() {
    Num n1, n2;
    cout<<"Enter n1 object a value: ";
    n1.get();
    cout<<"Enter n2 object a value: ";
    n2.get();

    n1 > n2;
    return 0;
}