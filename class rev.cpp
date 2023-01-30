#include<iostram>
using namespace std;
class reverse{
	public:
	int rev(int n){
		int revs,rem=0;
		cout<<"enter the number :";
		cin>>n;
		while(n!=0)
		{
			rem=n%10;
			revs=revs*10+rem;
			n/=10;
		}
		cout<<"reverse of the number :"<<revs;
	}
};
int main(){
	reverse obj;
	int c;
	obj.rev(c);
}
