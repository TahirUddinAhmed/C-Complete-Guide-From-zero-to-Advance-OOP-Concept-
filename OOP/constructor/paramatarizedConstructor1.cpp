#include <iostream>
using namespace std;

class Integer {
  int m;   // private property
  int n;

public:
  Integer(int p, int q) {
    m = p;
    n = q;
  }

  public:
    void getdata() {
        cout<<"value of first number : "<<m<<endl;
        cout<<"Value fo second number: "<<n<<endl;
    }
};

int main() {
    Integer int1(32, 56); // implicit call
    Integer int2 = Integer(75, 100); // explicit call

    // get values
    int1.getdata();
    int2.getdata();
    return 0;
}