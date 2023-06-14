#include <iostream>
#include <string>
using namespace std;

class Hero {
  int health;
  char level;
  string name;
public: 
  Hero(int health, char level, string name) {
    this->health = health;
    this->level = level;
    this->name = name;
  }
  // copy constructor 
  Hero(Hero &temp) {
    cout<<"Copy constructor called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
    this->name = temp.name;
  }

  void display() {
    cout<<"Name: "<<this->name<<endl;
    cout<<"Health: "<<this->health<<endl;
    cout<<"Level: "<<this->level<<endl;
  }
};

int main() {
    Hero h1(56, 'C', "Tahir Ahmed");
    Hero h2(h1);

    h1.display();
    h2.display();
    return 0;
}