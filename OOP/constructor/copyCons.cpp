#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    private:
     int health;
     
    public:
     char level;
     char *name;

    public:
    Hero() {
        cout<<"Simple constructor called!"<<endl;
        name = new char[100];
    }

    void print() {
        cout<<"Name = "<<name<<endl;
        cout<<"Health= "<<health<<endl;
        cout<<"level= "<<level<<endl;
    }

    // copy constructor 
    // Hero(Hero &temp) {
    //     cout<<"COPY CONSTRUCTOR CALLED!"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    void getHeath() {
        cout<<"Health= "<<health<<endl;
    }
    void getLevel() {
        cout<<"Level= "<<level<<endl;
    }

    // setter
    void setName(char name[]) {
        strcpy(this->name, name);
    }

};

int main() {
    Hero hero1;
    hero1.setHealth(25);
    hero1.setLevel('C');
    char name[7] = "Tahir";
    hero1.setName(name);

    hero1.print();

    

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'J';
    hero1.print();

    hero2.print();

    // Hero tahir;
    // tahir.setHealth(70);
    // tahir.setLevel('B');

    // // copy constructor
    // Hero RRR(tahir);

    // RRR.getHeath();
    // RRR.getLevel();
    return 0;
}