// C++ code to demonstrate the working of  
// swap() 
#include<iostream> 
#include<list> // for list functions 
using namespace std; 
int main() 
{ 
    // Initializing list1 
    list<int> lis01 = {1, 2, 3, 4}; 
      
    // Initializing list2 
    list<int> lis02 = {2, 4, 6}; 
      
     // Displaying list before swapping 
     cout << "The contents of 1st list "
             "before swapping are : "; 
     for (int &x : lis01) 
         cout << x << " "; 
     cout << endl; 
     cout << "The contents of 2nd list "
             "before swapping are : "; 
     for (int &x : lis02) 
         cout << x << " "; 
     cout << endl; 
   
     // Use of swap() to swap the list 
     lis01.swap(lis02); 
   
     // Displaying list after swapping 
     cout << "The contents of 1st list "
             "after swapping are : "; 
     for (int &x : lis01) 
         cout << x << " "; 
     cout << endl; 
   
     cout << "The contents of 2nd list "
             "after swapping are : "; 
     for (int &x : lis02) 
         cout << x << " "; 
     cout << endl;       
    return 0;       
} 
/* Output *//*
The contents of 1st list before swapping are : 1 2 3 4 
The contents of 2nd list before swapping are : 2 4 6 
The contents of 1st list after swapping are : 2 4 6 
The contents of 2nd list after swapping are : 1 2 3 4 
*/