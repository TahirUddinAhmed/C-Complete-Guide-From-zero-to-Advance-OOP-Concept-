#include <iostream>
using namespace std;
class abstractEmployee {
    virtual void askForPromotion() = 0; // pure virtual function
};

class Employee : public abstractEmployee {
  string name;
  int age;
  string company;

public: 
   Employee(string name, int age, string company) {
    this->name = name;
    this->age = age;
    this->company = company;
   }

   void askForPromotion() {
    if(age > 30) {
        cout<<"You got promoted";
    } else {
        cout<<"Sorry, no promotion for you";
    }
   }
};

int main() {
    Employee e1("tahir ahmed", 20, "Google");
    Employee e2("John", 45, "CampusCourse");


    e1.askForPromotion();
    e2.askForPromotion();
    return 0;
}