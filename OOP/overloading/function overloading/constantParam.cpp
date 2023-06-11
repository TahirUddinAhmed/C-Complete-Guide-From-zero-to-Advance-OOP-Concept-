// constant parameter
#include <iostream>
using namespace std;

// void printNum(int n) {
//     if(n== 2) {
//         n--;
//     }
//     cout<<"The value is: "<<n<<endl;
// }

void printNum(const int n) {
    cout<<"The value is: "<<n<<endl;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    printNum(num);
    return 0;
}