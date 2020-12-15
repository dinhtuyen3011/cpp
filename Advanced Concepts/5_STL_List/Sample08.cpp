#include <iostream>
#include <list>
using namespace std; 
  
int main() 
{ 
    list<int> lis = { 10, 20, 30, 40, 50 }; 
  
    cout << "The list in reverse order: "; 
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it) 
        cout << *it << " "; 
  
    return 0; 
} 
/* Output */
// The list in reverse order: 50 40 30 20 10