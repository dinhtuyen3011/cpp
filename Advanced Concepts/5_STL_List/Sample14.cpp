// C++ code to demonstrate the working of  
// unique() and splice() 
#include<iostream> 
#include<list> // for list functions 
using namespace std; 
int main() 
{ 
    // Initializing list1 
    list<int> lis01 = {1, 1, 1, 2, 2, 3, 3, 4}; 
      
    // Initializing list2 
    list<int> lis02 = {2, 4, 6}; 
      
    // Initializing list1 iterator 
    list<int>::iterator it = lis01.begin(); 
      
    // using advance() to increment iterator position 
    advance(it, 3); 
            
    // Displaying list elements  
    cout << "list1 before unique operation is : "; 
    for (int &x : lis01) cout << x << " "; 
    cout << endl; 
      
    // using unique() to remove repeating elements 
    lis01.unique(); 
      
    // Displaying list elements  
    cout << "list1 after unique operation is : "; 
    for (int &x : lis01) cout << x << " "; 
    cout << endl << endl; 
      
    // using splice() to splice list2 in list1 at position it 
    // inserts list2 after 2nd position 
    lis01.splice(it, lis02); 
      
    // Displaying list elements  
    cout << "list1 after splice operation is : "; 
    for (int &x : lis01) cout << x << " "; 
    cout << endl; 
            
    return 0;       
} 
/* Output *//*
list1 before unique operation is : 1 1 1 2 2 3 3 4 
list1 after unique operation is : 1 2 3 4 
list1 after splice operation is : 1 2 4 6 2 3 4 
*/