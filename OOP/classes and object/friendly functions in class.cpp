#include<iostream>
using namespace std;
 
class scientist {
public:
    friend void details(scientist, string, int); // declare friend function
};
 
class manager {
public:
    friend void details(manager, string, int); // declare friend function
};
 
void details(scientist s, string a, int b) {
    cout<<"enter name and age : "<<endl;
    cin>>a>>b;
    cout<<"Name: "<<a<<" age : "<<b<<endl;
}
 
void details(manager m, string a, int b) {
    cout<<"enter name and age : "<<endl;
    cin>>a>>b;
    cout<<"Name: "<<a<<" age : "<<b<<endl;
}
 
int main() {
    scientist s1;
    s1.details(s1, "scientist 1", 50); // pass object as argument
    manager m1; 
    m1.details(m1, "manager 1", 60); // pass object as argument
    return 0;
}
