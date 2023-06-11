#include <iostream>
using namespace std;

int main() {
    int age; // declare variable

    cout<<"Enter your age: ";
    cin>>age; // take input from user

    // check conditon using switch statement
    switch (age) {
        case 12:
            cout<<"Your age is 12 years";
            break;
        case 18:
            cout<<"Your age is 18 years";
            break;
        default:
            cout<<"You are neither 12 nor 18 years old";
            break;
    }

    return 0;
}