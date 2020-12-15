#include <iostream>
using namespace std;

int main(){
    int  a; int b;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Enter value of B: ";
    cin >> b;

    int *ptrA=&a;
    int *ptrB=&b;    

    cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";    
    cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";
    
    *ptrA = 100;
    *ptrB = 200;
    
    cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";    
    cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";
    
    return 0;
}
/* Output *//*
Enter value of A: 10
Enter value of B: 20
Value of ptrA is 10 sored in address 0x70fdfc
Value of ptrB is 20 sored in address 0x70fdf8
Value of ptrA is 100 sored in address 0x70fdfc
Value of ptrB is 200 sored in address 0x70fdf8
*/