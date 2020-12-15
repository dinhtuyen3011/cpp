#include<iostream>  
using namespace std; 
  
class Test { 
  private:     
    int y = 0;
    int x = 0;     
  public: 
    Test() : x(10), y(x + 10) {} 
    void print(); 
}; 
  
void Test::print() 
{  
   cout<<"x = "<<x<<" y = "<<y;  
} 
  
int main() 
{ 
    Test t; 
    t.print();      
    return 0;     
}
/* Output */
// x = 10 y = 10
