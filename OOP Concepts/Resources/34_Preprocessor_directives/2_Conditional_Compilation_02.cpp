#include <iostream>
using namespace std;

#define MAX(a,b) (((a)>(b)) ? a : b)
#define MIN(a,b) (((a)<(b)) ? a : b)
#define DEBUG1234

int main () {
   int i, j;
   i = 100;
   j = 30;

<<<<<<< HEAD
#ifdef DEBUG
   cout <<"Trace: Inside main function" << endl;
=======
#ifdef DEBUG1234
   cerr <<"Trace: Inside main function" << endl;
>>>>>>> master
#endif

   cout <<"The minimum is " << MIN(i, j) << endl;
   cout <<"The maximum is " << MAX(i, j) << endl;

#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif
    return 0;
}
/* Output *//*
Trace: Inside main function
The minimum is 30
The maximum is 100
Trace: Coming out of main function
*/
