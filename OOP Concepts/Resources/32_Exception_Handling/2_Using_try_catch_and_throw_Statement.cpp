#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, b,c;
    // try block activates exception handling
    cin >> a >> b;
    try 
    {
        if(b == 0)
        {
            // throw custom exception
            throw "Division by zero not possible";
        }
		c = a/b;
    }
    catch(const char* ex) // catches exception
    {
        cout<<ex;
    }
    cout << c;
    return 0;
}
/* Output */
// Division by zero not possible
