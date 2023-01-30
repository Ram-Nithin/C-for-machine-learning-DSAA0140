#include<iostream>
using namespace std;
class Box {
   public:
     int length;
     void setWidth( int wid );
     int getWidth( void );
    private:
      int width;
};
int Box::getWidth(void) {
   return width ;
}
void Box::setWidth( int wid ) {
   width = wid;
}
int main() {
   Box box;
   int len,width;
   cout << "Enter the Length of box : " <<endl;
   cin>>len;
   box.length=len;
   cout << "Enter the Width of box : " <<endl;
   cin>>width;
     box.setWidth(10.0);  
     cout << "Length of box : " << box.length <<endl;
     cout << "Width of box : " << box.getWidth() <<endl;
return 0;

}