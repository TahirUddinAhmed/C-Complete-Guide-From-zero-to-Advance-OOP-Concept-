#include <iostream>
using namespace std;

struct user {
    int age; // by default members are public
    void sayHello() {
        cout<<"Hello world"<<endl;
    }
};

class user1 {
 int age; // by default members are private
public: 
  void setAge() {
    cout<<"Enter your age:";
    cin>>age;
  }

  void getAge() {
    cout<<"Age: "<<age<<endl;
  }
};

int main() {
    // structure 
    cout<<"****** Structures *******"<<endl;
    user u;
    u.age = 12;
    u.sayHello();

    cout<<"Age: "<<u.age<<endl;

    // class
    cout<<"\n"<<endl; // new line
    cout<<"****** class *******"<<endl;
    user1 u1;
    u1.setAge();
    u1.getAge();


    return 0;
}

// 9678695911