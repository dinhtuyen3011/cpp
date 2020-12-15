#include <iostream>
using namespace std;

int main () {
   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;

   return 0;
}
/* Output *//*
Value of __LINE__ : 5
Value of __FILE__ : C:\Users\sales\Desktop\OOP\cpro\main.cpp
Value of __DATE__ : May  1 2019
Value of __TIME__ : 10:18:34
*/