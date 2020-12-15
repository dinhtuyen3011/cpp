/* Three-Dimensional Array */
// C++ program to print elements of Three-Dimensional 
// Array 
#include<iostream> 
using namespace std; 
  
int Three_Dimensional_Array_Demo() 
{ 
    // initializing the 3-dimensional array 
    int x[2][3][2] = 
    { 
        { {0,1}, {2,3}, {4,5} }, 
        { {6,7}, {8,9}, {10,11} } 
    }; 
  
    // output each element's value 
    for (int i = 0; i < 2; ++i) 
    { 
        for (int j = 0; j < 3; ++j) 
        { 
            for (int k = 0; k < 2; ++k) 
            { 
                cout << "Element at x[" << i << "][" << j 
                     << "][" << k << "] = " << x[i][j][k] 
                     << endl; 
            } 
        } 
    } 
    return 0; 
}
/* Output *//*
Element at x[0][0][0] = 0
Element at x[0][0][1] = 1
Element at x[0][1][0] = 2
Element at x[0][1][1] = 3
Element at x[0][2][0] = 4
Element at x[0][2][1] = 5

Element at x[1][0][0] = 6
Element at x[1][0][1] = 7
Element at x[1][1][0] = 8
Element at x[1][1][1] = 9
Element at x[1][2][0] = 10
Element at x[1][2][1] = 11

*/

