/* C++ code for function with argument but no return value */
#include <iostream> 
using namespace std;

//function prototype definition in c++
void function(int, int[], char[]); 

int main() 
{ 
    int a = 20; 
    int ar[5] = { 10, 20, 30, 40, 50 }; 
    char str[30] = "IMIC Technology"; 
    function(a, &ar[0], &str[0]); 
    
    return 0; 
} 
  
void function(int a, int* ar, char* str) 
{ 
    int i; 
    cout<<"value of a is "<< a <<endl; 
    for (i = 0; i < 5; i++) { 
        cout<<"value of ar["<<i<<"] is "<<ar[i]<<endl; 
    } 
    cout<<"Value of str is "<< str <<endl; 
}
/* Output *//*
value of a is 20
value of ar[0] is 10
value of ar[1] is 20
value of ar[2] is 30
value of ar[3] is 40
value of ar[4] is 50
Value of str is IMIC Technology
*/

