/* Parameterized Constructors */
// CPP program to illustrate parameterized constructors 
#include <iostream> 
using namespace std; 
  
class Point {
private: 
    int x, y;  
public: 	
    // Parameterized Constructor     
    Point(int x1, int y1) {  
        x = x1;
        y = y1;
    }
	//Member functions	  
    int getX(){ return x; }  
	//Member functions   
    int getY() { return y; } 
};  
int main()
{ 
    // Constructor called    
    Point p(10, 15); 
  
    // Access values assigned by constructor 
    cout << "p.x = " << p.getX() << ", p.y = " << p.getY(); 
  
    return 0; 
}
/* Output */
// p.x = 10, p.y = 15
