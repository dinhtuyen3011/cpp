/* 2) To return reference to the calling object */
#include<iostream> 
using namespace std; 
  
class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; } 
  Test &setX(int a) { x = a; return *this;} 
  Test &setY(int b) { y = b; return *this;} 
  void print() { cout << "x = " << x << " y = " << y << endl; } 
}; 
  
int main() 
{ 
  Test obj1(5, 5); 
  
  // Chained function calls.  All calls modify the same object 
  // as the same object is returned by reference 
<<<<<<< HEAD
  obj1.setX(10).print();  //x = 10 y = 20
=======
  obj1.setX(10).setY(20).setX(30).setY(40).setX(50).setY(60).print();  //x = 10 y = 20
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
  
  //obj1.print(); 
  return 0; 
}
/* Output */
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> master
// x = 10 y = 20
=======
// x = 50 y = 60
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
<<<<<<< HEAD
=======
=======
<<<<<<< HEAD
// x = 10 y = 20
=======
// x = 50 y = 60
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
=======
// x = 50 y = 60
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
>>>>>>> dev02
>>>>>>> master
