#include<iostream>
#include<string>
using namespace std;

class Dog {
    int license;
    string name;
public: 
   Dog() {
    this->name = "NA";
    this->license = 0;
   };
   Dog(string name) {
    this->name = name;
    this->license = 0;
   }

   Dog(int license) {
    this->license = license;
    this->name = "NA";
   }

   Dog(string name, int license) {
    this->name = name;
    this->license = license;
   }

   string getName() {
    return name;
   }

   int getLicense() {
    return license;
   }


};