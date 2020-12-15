// C++ program for function overloading 
#include <bits/stdc++.h>   
using namespace std; 

class func_overload 
{ 
    public:           
    void func(int x) { 
        cout << "value of x is " << x << endl; 
    }        
    void func(double x) { 
        cout << "value of x is " << x << endl; 
    }          
    void func(int x, int y) { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
    void func(float x, float y) { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
}; 
  
int main() { 
      
    func_overload obj;
        
    obj.func(7); 
      
    obj.func(9.132); 
      
    obj.func(85,64); 
    
    obj.func(8.5f,6.4f); 
    
    return 0; 
} 
/* Output *//*
value of x is 7
value of x is 9.132
value of x and y is 85, 64
*/
