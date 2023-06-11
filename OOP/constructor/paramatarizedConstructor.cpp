#include <iostream>
using namespace std;

class Hero {
    public:
        string name;
        int health;
    Hero(string n, int h) { // paramatarized constructor
        this->name = n;
        this->health = h;
    }

    public:
      void getdata() {
        cout<<"\nPlayer details:----"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Health: "<<health<<endl;
      }
};

int main() {
    Hero h1("John", 49);
    h1.getdata();
    return 0;
}