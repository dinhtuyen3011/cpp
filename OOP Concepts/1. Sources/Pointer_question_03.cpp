#include<iostream>
using namespace std;
int main()
{
   char blocks[3] = {'A','B','C'};
   char *ptr = &blocks[0];
   char temp;

   temp = blocks[0];
   cout<<"Temp01: "<<temp<<endl;
   temp = *(blocks + 2);
   cout<<"Temp02: "<<temp<<endl;
   temp = *(ptr + 1);
   cout<<"Temp03: "<<temp<<endl;
   temp = *ptr;
   cout<<"Temp04: "<<temp<<endl;

   ptr = blocks + 1;
   cout<<"ptr01: "<<ptr<<endl;
   temp = *ptr;
   cout<<"Temp05: "<<temp<<endl;
   temp = *(ptr + 1);

   ptr = blocks;
   cout<<"ptr02: "<<ptr<<endl;
   temp = *++ptr;
   cout<<"Temp06: "<<temp<<endl;
   temp = ++*ptr;
   cout<<"Temp07: "<<temp<<endl;
   temp = *ptr++;
   cout<<"Temp08 "<<temp<<endl;
   temp = *ptr;
   cout<<"Temp09: "<<temp<<endl;

   return 0;
}
/* Output */
Temp01: ?
Temp02: ?
Temp03: ?
Temp04: ?
ptr01: ?
Temp05: ?
ptr02: ?
Temp06: ?
Temp07: ?
Temp08 ?
Temp09: ?

