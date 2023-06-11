#include <iostream>
using namespace std;

int main() {
    // print the odd numbers from 1 to 30
    int i=1;

    cout<<"Print odd number from 1 to 30"<<endl;
    // while(i <= 30) {
    //     if(i % 2 != 0){
    //         cout<<i<<endl;
    //     }
    //     i++;
    // }
    for(;i <= 30; i++) {
        if(i % 2 != 0){
            cout<<i<<endl;
        }
    }

    return 0;
}