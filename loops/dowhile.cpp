#include <iostream>
using namespace std;

int main() {
    // print to even numbers from 1 to 30;
    int i=1;
    cout<<"Print even numbers from 1 to 30"<<endl;

    // loop
    do {
        if(i % 2 == 0) {
            cout<<i<<endl;
        }
        i++;
    }while(i<=30);
    
    return 0;
}