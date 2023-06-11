#include <iostream>
using namespace std;

class Numbers {
    int a;

    public:
     void get() {
        cin>>a;
     }

     void operator+(Numbers b) {
        int c;
        c = a + b.a;

        cout<<"Result = "<<c<<endl;
     }

     void operator-(Numbers b) {
        int c = a - b.a;

        cout<<"Result = "<<c<<endl;
     }

     void operator *(Numbers b) {
        int c;
        c = a * b.a;

        cout<<"result = "<<c<<endl;
     }

     void operator /(Numbers b) {
        int c = a / b.a;

        cout<<"Result = "<<c<<endl;
     }


};


int main() {
    Numbers n1, n2;
    int i;

    do {
        cout<<"1. Adddition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit );"<<endl;

        cout<<"Enter your choice: ";
        cin>>i;

        switch(i) {
            case 1 :
                cout<<"Enter the first number: ";
                n1.get();
                cout<<"Enter the second number: ";
                n2.get();
                n1 + n2;
                break;
            case 2: 
                cout<<"Enter the first number: ";
                n1.get();
                cout<<"Enter the second number: ";
                n2.get();
                n1 - n2;
                break;
            case 3: 
                cout<<"Enter the first number: ";
                n1.get();
                cout<<"Enter the second number: ";
                n2.get();
                n1 * n2;
                break;
            case 4:
                cout<<"Enter the first number: ";
                n1.get();
                cout<<"Enter the second number: ";
                n2.get();
                n1 / n2;
                break;
            case 5:
                cout<<"Thank you for visiting"<<endl;
                break;
            default: 
              cout<<"Enter a valid choice";
              break;
        }
    }while(i != 5);

 

 return 0;
}