#include<iostream>
using namespace std;
int main()
{
   char blocks[10] = {'A','B','C', 'D', 'E', 'F', 'G', 'H','I','K'};
   char *ptr = &blocks[0];
   char temp;

   temp = blocks[0];
   cout<<"Temp01: "<<temp<<endl; 
   temp = *(blocks + 1);
   cout<<"Temp02: "<<temp<<endl; 
   temp = *(ptr + 1);
   cout<<"Temp03: "<<temp<<endl; 
   temp = *ptr;
   cout<<"Temp04: "<<temp<<endl; 

   ptr = blocks + 1;  
   cout<<"Temp05: "<<temp<<endl; 
   temp = *(ptr + 1);
   ptr = blocks;   
   cout<<"Temp06: "<<temp<<endl;  
   temp = ++*ptr;
   cout<<"Temp07: "<<temp<<endl; 
   temp = *ptr++;
   cout<<"Temp08 "<<temp<<endl;  
   temp = *ptr;
   cout<<"Temp09: "<<temp<<endl; 
   return 0;
}
/* Output *//*
Temp01: A
Temp02: B
Temp03: B
Temp04: A
Temp05: A
Temp06: C
Temp07: B
Temp08 B
Temp09: B
*/

