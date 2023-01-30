#include<iostream>
#include<string>
using namespace std;

class sample{
	public: int m1,m2,m3;
		int student(int regno){
			string name,dept;
			cout<<"enter the reg number :"<<endl;
			cin>>regno;
			cout<<"enter the student name :"<<endl;
			cin>>name;
			cout<<"enter the department :"<<endl;
			cin>>dept;
			cout<<"enter the 1st mark :"<<endl;
			cin>>m1;
			cout<<"enter the 2nd mark :"<<endl;
			cin>>m2;
			cout<<"enter the 3rd mark :"<<endl;
			cin>>m3;
		}
		int grade(int tot){
			tot=m1+m2+m3;
			if(tot>=80){
				cout<<"A grade";
			}
			else if(tot>=50 && tot<80){
				cout<<"B grade";
			}
			else{
				cout<<"F fail";
			}
		}
};
int main(){
	sample sam;
	int reg,to;
	sam.student(reg);
	sam.grade(to);
}
