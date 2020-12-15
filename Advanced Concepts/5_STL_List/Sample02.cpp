#include<iostream>
#include<list>
using namespace std;

int main()  {
   // Khai bao va khoi tao gia tri cho List
   list<int> new_list = {1,2,3,4};

   // Hien thi phan tu trong List
   // a. It returns the first element of the list
   cout<<"Front: "<< new_list.front()<<endl;

   // b. It returns the last element of the list
   cout<<"Back: "<< new_list.back()<<endl;

   return 0;
}
/* Output *//*
Front: 1
Back: 4
*/
