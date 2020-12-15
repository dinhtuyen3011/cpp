#include <iostream>
using namespace std;

int main(void) {
   char str[] = "IMIC Technology";
   char *pc = str;

   cout << str[0] <<' '<< *pc <<' '<<pc[3]<<"\n";
   pc = pc + 3;
   cout<<pc<<endl;
   cout <<*pc<<' '<< pc[2] <<' '<< pc[5];

   return 0;
}
/* Output *//*
I I C
C Technology
C T h
*/
