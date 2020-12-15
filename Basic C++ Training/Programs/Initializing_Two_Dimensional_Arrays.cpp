/* First Method */
int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}
#include<iostream>
using namespace std;
int main()
{
    int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};
    cout<<x[0][0];
    cout<<x[0][1];
    cout<<x[0][2];
    cout<<x[0][3];
    
    cout<<x[1][3]; 

    return 0;
}
/* Output *//*
01234
*/


/* Better Method */
int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};


