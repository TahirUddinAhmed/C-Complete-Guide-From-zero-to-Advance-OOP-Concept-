#include <iostream>
using namespace std;

class Cars {
    public:
      string name;
      int wheels_count;
      int seats;
    
    void print_details() {
        cout<<"Car name is "<<name<<endl;
        cout<<"The cars has "<<wheels_count << " wheels"<<endl;
        cout<<"number of seats : " << seats << endl;
    }
};

int main() {
    // static allocation
    Cars c1;
    c1.name = "BMW";
    c1.seats = 6;
    c1.wheels_count = 4;

    
    // call : print_details
    c1.print_details();
    cout<<endl;

    // dynamic allocation
    Cars *c2 = new Cars;
    c2->name = "Thar";
    c2->seats = 8;
    c2->wheels_count = 4;


    (*c2).print_details();
    // or 
    cout<<"Name :"<<c2->name;


    return 0;
}