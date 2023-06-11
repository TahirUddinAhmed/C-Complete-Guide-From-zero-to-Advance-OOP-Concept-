#include <iostream>
using namespace std;

class AbstractEmployee {
   virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee {
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

    void AskForPromotion() {
        if(age > 30) {
            cout<<name<<" got promoted!"<<endl;
        } else {
            cout<<name<<", sorry no promotion for you!"<<endl;
        }
    }

};


int main() {
 Employee emp1("Tahir", "campusCourse", 19);
 Employee emp2("John", "Google", 35);

 emp1.AskForPromotion();
 emp2.AskForPromotion();

 
 return 0;
}