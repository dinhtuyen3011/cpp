#include <iostream>
using namespace std;
//function prototype definition in c++
void test();

int main()
{
    test();
    return 0;
}

void test() {
    cout << "Hello";   
    return (void)"";
}
/* Output */
// Hello

