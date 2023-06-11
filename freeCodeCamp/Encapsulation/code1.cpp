#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string company;
    int age;

public:
    // constructor
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    // setters
    void setName(string name) {
        this->name = name;
    }

    // getters
    string getName() {
        return name;
    }

    // Company
    // setters & getters
    void setCompany(string company) {
        this->company = company;
    }

    string getCompany() {
        return company;
    }

    // age :  getters and setters
    void setAge(int age) {
        if(age >= 18) {
            this->age = age;
        } 
    }

    int getAge() {
        return age;
    }


    void introduceYourself() {
        cout<<"Name - "<<name<<endl;
        cout<<"Company - "<<company<<endl;
        cout<<"Age - "<<age<<endl;
    }

};


int main() {
 Employee emp1("Tahir", "campusCourse", 19);
 emp1.setAge(15);
 cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old";
 return 0;
}