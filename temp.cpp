/*dec a class called celcius use the func called getdata to farhenheit degree and print the celcius value*/

#include<iostream>
using namespace std;
class celcius{
	public:
		int getdata(int fahr){
			int cel;
			cout<<"enter the fahernheit :";
			cin>>fahr;
			cel =(fahr-32)*(5/9);
			cout<<"celcius :"<<cel;
			return cel;
		}
};
int main(){
	celcius s1;
	int far;
	s1.getdata(far);
	return 0;
}
