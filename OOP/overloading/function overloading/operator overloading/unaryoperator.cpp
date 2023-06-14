#include <iostream>
using namespace std;

class Shape {
   int height;
   int width;
public: 
   Shape() {
      height = 0;
      width = 0;
   }

   Shape(int height, int width) {
      this->height = height;
      this->width = width;
   }

   void area() {
      cout<<"Area: "<<height * width<<endl; 
   }
};

int main() {
   Shape s1(9, 2), s2;
   s1.area();
   s2.area();

   return 0;
}


class Base1 {
    // Base class 1 members
};

class Base2 {
    // Base class 2 members
};

class Derived : public Base1, public Base2 {
    // Derived class members
};


class Base {
public:
    virtual void pureVirtualFunction() = 0;
    // Other member functions and variables...
};


