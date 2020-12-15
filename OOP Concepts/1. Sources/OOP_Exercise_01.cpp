#include <iostream>
using namespace std;

class CRectangle {
   public:
   int x,y;   //Data Member
   int area(){return x*y;}  //Member functions
};

int main () {
	
  CRectangle rect;  //Default constructors
  cout<<"Enter length of rectangle:";  
  cin>>rect.x;
  cout<<"Enter breadth of rectangle:";
  cin>>rect.y;
  cout <<"Area:"<< rect.area(); 
   
  return 0;
}
/* Output *//*
Enter length of rectangle:5
Enter breadth of rectangle:5
Area:25
*/
