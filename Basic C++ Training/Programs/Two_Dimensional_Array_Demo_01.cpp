/* Two-Dimensional Array */
// C++ Program to print the elements of a 
// Two-Dimensional array 
#include<iostream> 
using namespace std; 
  
int Two_Dimensional_Array_Demo_01() 
{ 
    // an array with 3 rows and 2 columns. 
    int x[3][2] = {{0,1}, {2,3}, {4,5}}; 
  
    // output each array element's value 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            cout << "Element at x[" << i << "][" << j << "]: "; 
            cout << x[i][j]<<endl; 
        } 
    }   
    return 0; 
}
/* Output *//*
Element at x[0][0]: 0
Element at x[0][1]: 1
Element at x[1][0]: 2
Element at x[1][1]: 3
Element at x[2][0]: 4
Element at x[2][1]: 5
*/
