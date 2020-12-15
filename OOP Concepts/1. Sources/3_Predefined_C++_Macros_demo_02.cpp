#include <iostream>
using namespace std;

#if ARRAY_SIZE>1000
	#error ARRAY_SIZE is too large (> 1000).
#endif

int main () {
   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;

   return 0;
}
