#include <iostream>
using namespace std;

// function declaration and defintion
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    cout<<"This program calculate the sum of two numbers -"<<endl;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<sum(a, b); //  function call

    return 0;
}