/* Example 4 : Overloading -> operator */
// CPP program to illustrate 
// operators that can be overloaded 
#include <bits/stdc++.h> 
using namespace std; 
  
class IMIC { 
public: 
    int num; 
    IMIC(int j) 
    { 
        num = j; 
    } 
    IMIC* operator->(void) 
    { 
        return this; 
    } 
}; 
  
// Driver code 
int main() 
{ 
    IMIC T(5); 
    IMIC *Ptr = &T; 
      
    // Accessing num normally 
    cout << "T.num = " << T.num << endl;  
      
    // Accessing num using normal object pointer 
    cout << "Ptr->num = " << Ptr->num << endl;  
      
    // Accessing num using -> operator 
    cout << "T->num = " << T->num << endl;  
  
    return 0; 
} 
/* Output *//*
T.num = 5
Ptr->num = 5
T->num = 5
*/
