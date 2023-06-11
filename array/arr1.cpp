#include <iostream>
using namespace std;

int main() {
    // array declaration and initialization
    int arr[3] = {7, 6, 9};

    // access elements of an array
    cout<<"accessing a specific element\n"<<arr[1]<<endl; // returns 6

    // access all the elements of the array
    cout<<"Access all the elements of the array"<<endl;
    for(int i = 0; i < 3; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}