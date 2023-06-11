#include <iostream>
using namespace std;

class Sample {
  int a, b;
  public:
   Sample(int a, int b) {
    (*this).a = a;
    (*this).b = b;
   }
};

int main() {

    return 0;
}