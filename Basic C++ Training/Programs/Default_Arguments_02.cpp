#include<iostream>  
using namespace std;  

int sum(int x, int y, int z=1, int w=1)  
{  
    return (x + y + z + w);  
}  

int sum(int x, int y, float z=0, float w=0)  
{  
    return (x + y + z + w);  
}  

int main()  
{  
    cout << sum(10, 15) << endl;  
    cout << sum(10, 15, 25) << endl;  
    cout << sum(10, 15, 25, 30) << endl;  
    return 0;  
}
/* Error *//*
prog.cpp: In function 'int main()':
prog.cpp:17:20: error: call of overloaded 
'sum(int, int)' is ambiguous
  cout << sum(10, 15) << endl; 
                    ^
prog.cpp:6:5: note: candidate: 
int sum(int, int, int, int)
 int sum(int x, int y, int z=0, int w=0) 
     ^
prog.cpp:10:5: note: candidate: 
int sum(int, int, float, float)
 int sum(int x, int y, float z=0, float w=0) 
     ^
*/
