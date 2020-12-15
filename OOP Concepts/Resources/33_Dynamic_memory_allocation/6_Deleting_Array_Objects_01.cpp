// Deleting Array Objects: We delete an array using [] brackets.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Allocate Heap memory
    int a[]={1,6,5,9,8,6,4,8,7,5};
    int* array = new int[10];
    array=a;
      for(int i=0;i<10;i++)
        cout<<*(array+i)<<"  ";
    // Deallocate Heap memory
    delete[] array;

    return 0;
}
