#include<iostream> 
using namespace std; 
void test(float s,float t) 
{ 
    cout << "Function with float called "; 
} 
void test(int s, int t) 
{ 
    cout << "Function with int called "; 
} 
int main() 
{ 
    test(3.5f, (float)5.6); //Casting to float
    return 0; 
} 
/* Output *//*
In function 'int main()':
13:13: error: call of overloaded 'test(double, double)' is ambiguous
 test(3.5,5.6);
*/

