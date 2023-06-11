#include <iostream>
using namespace std;

int main() {
    int marks[6]; // this array will store marks of 6 student
    
    cout<<"Enter marks of 6 student : "<<endl;
    for(int i = 0; i < 6; i++) {
        cin>>marks[i];
    }

    // print the result 
    for(int i = 0; i < 6; i++) {
        cout<<"marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
    return 0;
}