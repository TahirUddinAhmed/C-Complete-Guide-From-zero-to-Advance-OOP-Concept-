#include <iostream>
using namespace std;

class Employee {
    // propertiess 
public:
    string name;
    int salary;

    // constructor
    // Employee(string name, int salary) {
    //     this->name = name;
    //     this->salary = salary;
    // };

    // methods
    void printdetails(){
        cout << "The name of our first employee is " << name << endl;
        cout << "and his salary is " << salary << " dollar" << endl;
    }
};

//  empty class
class Emptclass {
    /// 
};

int main() {
    Employee har; // instantiate the class
    har.name = "Tahir";
    har.salary = 90000;
    har.printdetails();

    // instantiate the empty class : creation of empty object
    Emptclass emp;

    // size of the class
    cout<<"Size of the class is " << sizeof(har) << " Bytes" << endl;
    // size of empty class
    cout<<"Size of empty class is " << sizeof(emp) << " Bytes" << endl;
    return 0;
}