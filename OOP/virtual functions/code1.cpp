#include <iostream>
using namespace std;


class ClassName {
  // Acess spacifiers
  // data members
  // member functions
};

class BaseClass {
 public: 
  int var_base = 1;
  virtual void display() {
    cout<<"Displaying base class variable var base "<<var_base<<endl; 
  }
};

class DerivedClass: public BaseClass {
public: 
  int var_derived = 2;
  void display() {
    cout<<"Displaying base class variable var base "<<var_base<<endl; 
    cout<<"Displaying base class variable var derived "<<var_derived<<endl; 
  }
};



int main() {
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}