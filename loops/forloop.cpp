#include <iostream>
using namespace std;

int main() {
    // print n numbers to the output
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        cout<<"count "<<i<<endl;
    }

    return 0;
}