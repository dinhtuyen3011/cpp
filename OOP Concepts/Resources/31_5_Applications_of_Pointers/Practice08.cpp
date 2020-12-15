#include <iostream>
using namespace std;

int main(){
   int a;
   cout<<"Enter number:";
   cin>>a;
   int *b=&a;

    cout<< " The pointer values is "<< *b << " the memory address is: "<< b;
    return 0;
}
/* Output *//*
Enter number:10
The pointer values is 10 the memory address is: 0x70fe04
*/