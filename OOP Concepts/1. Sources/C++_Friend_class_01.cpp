#include <iostream>   
using namespace std;  
  
class A  
{  
    int x =5;                 //private data member
    friend class B;           //friend class.     
};  

class B  
{  
  public:  
    void display(A a)  
    {  
    	// Since B is friend of A, it can access 
        // private data members of A 
        cout<<"value of x is : "<<a.x;  
    }  
}; 
 
int main()  
{  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
}
/* Output */
// value of x is : 5
