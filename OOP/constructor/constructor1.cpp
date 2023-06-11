#include <iostream>
using namespace std;

class Cars {
    public:
      string name;
      int wheels_count;
      int seats;

    Cars() {
        cout<<"Constructor called" << endl;
    }
    
    void print_details() {
        cout<<"Car name is "<<name<<endl;
        cout<<"The cars has "<<wheels_count << " wheels"<<endl;
        cout<<"number of seats : " << seats << endl;
    }
};



int main() {
    cout<<"hi"<<endl;
    Cars bmw; // instantiate statically
    cout<<"Bye"<<endl;

    // dynamically
    Cars *thar = new Cars;
    
    return 0;
}