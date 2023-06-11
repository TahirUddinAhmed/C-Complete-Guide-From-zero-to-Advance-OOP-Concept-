#include <iostream>
using namespace std;

class BaseClass {
 public: 
  int var_base;
  void display() {
    cout<<"Displaying base class variable var base "<<var_base<<endl; 
  }
};

class DerivedClass: public BaseClass {
public: 
  int var_derived;
  void display() {
    cout<<"Displaying base class variable var base "<<var_base<<endl; 
    cout<<"Displaying base class variable var derived "<<var_derived<<endl; 
  }
};

int main() {
    BaseClass *base_class_pointer;
    BaseClass obj1;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class


    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    return 0;
}