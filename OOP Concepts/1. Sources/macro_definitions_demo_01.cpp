// function macro
#include <iostream>
using namespace std;

#define getmin(a,b) (((a)<(b)) ? a : b)
#define getmax(a,b) ((a)>(b)?(a):(b))

int main()
{
  int x=5, y;
  y= getmax(x,2);
  cout << y << endl;
  cout << getmax(7,x) << endl;
  return 0;
}
/* Output */
5
7
