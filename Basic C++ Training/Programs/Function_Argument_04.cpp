#include <iostream>
using namespace std;
//function prototype definition in c++
int function(int, int[]); 

int main() 
{ 
    int i, a = 20; 
    int arr[5] = { 10, 20, 30, 40, 50 }; 
    a = function(a, &arr[0]); 
    cout<<"value of a is "<< a <<endl; 
    for (i = 0; i < 5; i++) { 
        cout<<"value of arr["<< i <<"] is "<< arr[i] <<endl; 
    } 
    return 0; 
} 
  
int function(int a, int* arr) 
{ 
    int i; 
    a = a + 20; 
    arr[0] = arr[0] + 50; 
    arr[1] = arr[1] + 50; 
    arr[2] = arr[2] + 50; 
    arr[3] = arr[3] + 50; 
    arr[4] = arr[4] + 50; 
    
    return a; 
}
/* Output *//*
value of a is 40
value of arr[0] is 60
value of arr[1] is 70
value of arr[2] is 80
value of arr[3] is 90
value of arr[4] is 100
*/

