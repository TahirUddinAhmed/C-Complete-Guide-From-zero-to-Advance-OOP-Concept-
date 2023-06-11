#include <iostream>
using namespace std;

// return_type function_name(list_args) {
//     // body of the function

//     // return statement
// }

void add(int num1, int num2) {
    int result;

    result = num1 + num2;

    cout<<"result is "<<result<<endl;
}

int main() {
 add(5, 6);
 return 0;
}