#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    string company;
    int age;

    // constructor
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    void introduceYourself() {
        cout<<"Name - "<<name<<endl;
        cout<<"Company - "<<company<<endl;
        cout<<"Age - "<<age<<endl;
    }

};



int main() {
    Employee emp1("Tahir ahmed", "Google", 19);
    emp1.introduceYourself();

    Employee emp2 = Employee("John", "Amazon", 35);
    emp2.introduceYourself();

    return 0;
}