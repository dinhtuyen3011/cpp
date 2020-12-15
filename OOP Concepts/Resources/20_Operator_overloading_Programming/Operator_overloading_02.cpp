/* Example 1 : Overloading ++ operator */
// CPP program to illustrate 
// operators that can be overloaded 
#include <iostream> 
using namespace std; 
  
class overload { 
private: 
    int count; 
  
public: 
    overload()  : count(4) {} 
  
    void operator++() 
    { 
        count = count + 5; 
    } 
    void Display() 
    { 
        cout << "Count: " << count; 
    } 
}; 
  
int main() 
{ 
    overload i; 
    // this calls "function void operator ++()" function 
    ++i; 
    i.Display(); 
    ++i;
    i.Display();
    return 0; 
}
/* Output */
// Count: 5