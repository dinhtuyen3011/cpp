#include<iostream>
using namespace std;
/* To modify local variables of the caller function */
void fun(int &x) { 
    x = 20; 
} 
  
int main() { 
    int x = 10; 
    fun(x); 
    cout<<"New value of x is "<<x; 
    return 0; 
}
/* Output *//*
New value of x is 20
*/