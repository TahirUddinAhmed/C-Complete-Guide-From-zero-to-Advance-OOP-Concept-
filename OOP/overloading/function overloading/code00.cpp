// function overloading
#include <iostream>
using namespace std;

int findSmaller(int a, int b);
float findSmaller(float a, float b);
char findSmaller(char p, char q);

int main() {
    int a = 5, b = 4;
    float fa1 = 12.98, fa2 = 12.99;
    char p = 'C', q = 'A';

    cout<<findSmaller(a, b)<<endl;
    cout<<findSmaller(fa1, fa2)<<endl;
    cout<<findSmaller(p, q)<<endl;

    return 0;
}

int findSmaller(int a, int b) {
    if(a > b) {
        return a;
    }else {
        return b;
    }
}

float findSmaller(float a, float b) {
    if(a>b) {
        return a;
    } else {
        return b;
    }
}

char findSmaller(char p, char q) {
    if(p > q) {
        return p;
    } else {
        return q;
    }
}