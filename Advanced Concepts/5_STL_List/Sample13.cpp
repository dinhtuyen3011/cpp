// C++ code to demonstrate the working of  
// merge() and remove_if() 
#include<iostream> 
#include<list> // for list functions 
using namespace std; 
int main() 
{ 
    // Initializing list1 
    list<int> lis01 = {1, 2, 3}; 
      
    // Initializing list2 
    list<int> lis02 = {2, 4, 6}; 
      
    // using merge() to merge list1 with list2 
    lis01.merge(lis02); 
      
    // Displaying list elements  
    cout << "list1 after merge operation is : "; 
    for (int &x : lis01) cout << x << " "; 
    cout << endl; 
      
    // using remove_if() to remove odd elements 
    // removes 1 and 3 
    lis01.remove_if([](int x){return x%2!=0;}); 
      
    // Displaying list elements  
    cout << "list1 after remove_if operation is : "; 
    for (int &x : lis01) cout << x << " "; 
    cout << endl; 
      
    return 0;       
} 
/* Output *//*
list1 after merge operation is : 1 2 2 3 4 6 
list1 after remove_if operation is : 2 2 4 6 
*/