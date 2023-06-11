#include <iostream>
using namespace std;

class student {
    int roll, age;
    string name;
    char grade;

public: 
   student(int roll = 0, int age = 0, string name = "No Name", char grade = 'A') {
    this->roll = roll;
    this->age = age;
    this->name = name;
    this->grade = grade;
   }

   void details() {
    cout<<"Student details:----"<<endl;
    cout<<"Name: "<<this->name<<",\t Age: "<<this->age<<endl;
    cout<<"Roll: "<<this->roll<<",\t Grade: "<<this->grade<<endl;
   }
};

int main() {
 student s1(17, 18, "Minju Begum");
 s1.details();

 return 0;
}