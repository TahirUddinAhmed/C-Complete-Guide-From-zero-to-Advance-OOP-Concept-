#include <iostream>
using namespace std;

class Shop {
    int id;
    float price;

public: 
   void setData(int a, float b) {
      id = a;
      price = b;
   }

   void display() {
    cout<<"Code of this item is "<<id<<endl;
    cout<<"Price of this item is "<<price<<endl;
   }

};

int main() {
    int size = 4;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p;
    float q;
    for(int i = 0; i < size; i++) {
        cout<<"Enter id and price of item "<<i+1<<" : "<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++; 
    }


    for(int i = 0; i <size; i++) {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->display();
        ptrTemp++;
    }
 




    return 0;
}