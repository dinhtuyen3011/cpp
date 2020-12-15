#include<iostream>
#include<list>
using namespace std;

int main()  {
   //1. Khai bao doi tuong List
   list <int> lis01;
   list <int> lis02 = {20,30,40,50};

   //2. Chen du lieu vao list
   lis01.push_front(100);
   lis01.push_front(200);
   lis01.push_front(300);

   //3. Hien thi danh sach
   cout<<"- List 01:"<<endl;
   list<int>::iterator itr;
   for(itr=lis01.begin();itr!=lis01.end();++itr)
     cout<<*itr<<endl;

   cout<<"- List 02:"<<endl;
   for(itr=lis02.begin();itr!=lis02.end();++itr)
     cout<<*itr<<endl;

   return 0;
}
/* Output */

