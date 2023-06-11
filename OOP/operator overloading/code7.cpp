#include<iostream>
using namespace std;

class calculate
{
    public:
    int add (int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a*b*c;
    }
    
};

int main (void){
calculate c;
cout<<c.add(10,20)<<endl;
cout<<c.add(20,30,50);
return 0;
}

