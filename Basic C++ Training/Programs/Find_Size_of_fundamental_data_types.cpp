#include <iostream>
using namespace std;
 
int Sample117() 
{
	cout << "\n\n Find Size of fundamental data types :\n";
	cout << "------------------------------------------\n";
    cout << " The sizeof(char) is :          " << sizeof(char) << " bytes"<<endl;
    cout << " The sizeof(short) is :         " << sizeof(short) << " bytes"<<endl;
    cout << " The sizeof(int) is :           " << sizeof(int) << " bytes"<<endl;
    cout << " The sizeof(long) is :          " << sizeof(long) << " bytes"<<endl;
    cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes"<<endl;
    cout << " The sizeof(float) is :         " << sizeof(float) << " bytes"<<endl;
    cout << " The sizeof(double) is :        " << sizeof(double) << " bytes"<<endl;
    cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes"<<endl;
    cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes"<<endl;
   return 0;
}
/* Output *//*
Find Size of fundamental data types :                                 
------------------------------------------                             
 The sizeof(char) is :          1 bytes                                
 The sizeof(short) is :         2 bytes                                
 The sizeof(int) is :           4 bytes                                
 The sizeof(long) is :          8 bytes                                
 The sizeof(long long) is :     8 bytes                                
 The sizeof(float) is :         4 bytes                                
 The sizeof(double) is :        8 bytes                                
 The sizeof(long double) is :   16 bytes                               
 The sizeof(bool) is :          1 bytes
 */
