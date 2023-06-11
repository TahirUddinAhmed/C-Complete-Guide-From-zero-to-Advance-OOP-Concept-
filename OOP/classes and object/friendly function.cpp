#include<iostream>
using namespace std;
 
 
 class scientist {
	string name;
	float salary;
 	public:
 	 friend	void details(string,int);
 	 
 	 void details(string a,int b) 
{
	cout<<"enter name and age : "<<endl;
	cin>>a>>b;
	cout<<"Name: "<<a<<"age : "<<b<<endl;
}
 };
 
 class manager {
	string name;
	float salary;
	 public:
 		friend void details(string,int);
 		
 		void details(string a,int b) 
{
	cout<<"enter name and age : "<<endl;
	cin>>a>>b;
	cout<<"Name: "<<a<<"age : "<<b<<endl;
}
 };
 
//void details(string a,int b) 
//{
//	cout<<"enter name and age : "<<endl;
//	cin>>a>>b;
//	cout<<"Name: "<<a<<"age : "<<b<<endl;
//}

int main() {
	scientist s1;
	s1.details("scientist 1",50);
	manager m1;	
	m1.details("manager 1",60);
	return 0;
}
