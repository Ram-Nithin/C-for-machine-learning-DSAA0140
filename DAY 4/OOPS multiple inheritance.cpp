#include<iostream>
using namespace std;
class A
{
	public:
		int n1;
		void display1()
		{
			cout<<"enter the value of A:";
			cin>>n1;
		}
};
class B{
	public:
		int n2;
		void display2()
		{
			cout<<"enter the value of B:";
			cin>>n2;
		}
};
class C:public A,public B
{
	public:
		int n3;
		void display3()
		{
			cout<<"enter the value of C:";
			cin>>n3;
		}
};
int main() {
   C obj;
   obj.display1();
   obj.display2();
   obj.display3();
   cout<<"the value of A is: "<< obj.n1 <<endl;
   cout<<"the value of Bis: "<< obj.n2 <<endl;
   cout<<"the value of C is: "<< obj.n3 <<endl;
   return 0;
}