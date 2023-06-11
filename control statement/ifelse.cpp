#include <iostream>
using namespace std;

int main() {
    int age; // variable declaration

    cout<<"Enter your age: ";
    cin>>age; // take input from the user

    // if else statement - check condition
    if(age > 18) {
        cout<<"You can vote!" << endl; // if condition is true execute this line
    } else {
        cout<<"You cann't vote" << endl; // else execute this line
    }
    


    return 0;
}