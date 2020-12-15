/* using operator ## called Token-Pasting operator */
#include <iostream>
using namespace std;
#define merge(a, b) a##b
int main()
{
<<<<<<< HEAD
	char x,y='d';
    cout<<merge(x,y)<<endl;
=======
    cout<<merge(6, 8)<<endl;
>>>>>>> dev04
}
/* Output */
// 1234
