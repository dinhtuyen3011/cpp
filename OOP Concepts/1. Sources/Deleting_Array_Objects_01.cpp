// Deleting Array Objects: We delete an array using [] brackets. 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Allocate Heap memory 
    int* array = new int[10];  
      
    // Deallocate Heap memory 
    delete[] array;  
  
    return 0; 
} 
