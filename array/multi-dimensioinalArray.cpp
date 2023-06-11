#include <iostream>
using namespace std;

int main() {
    // initialize a two dimensional array
    int a[2][3] = {
        {1, 5, 9},
        {3, 5, 7}
    };

    // access all the elements of the array
    
    // you can also try this -
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"The value at "<<i<<" , "<<j<<" is "<<a[i][j]<<endl;
        }
    }
    return 0;
}