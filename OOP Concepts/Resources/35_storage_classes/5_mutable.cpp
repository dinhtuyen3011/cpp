/*
- Sometimes there is a requirement to modify one or more data members of class/struct
through const function even though you don’t want the function to update other members
of class/struct.
- This task can be easily performed by using the mutable keyword.
- The keyword mutable is mainly used to allow a particular data member of const object
to be modified.
- When we declare a function as const, this pointer passed to function becomes const.
- Adding mutable to a variable allows a const pointer to change members.
*/
#include <iostream>
using std::cout;

class Test {
public:
    int x;
    // defining mutable variable y
    // now this can be modified
    mutable int y;
    Test()
    {
        x = 4;
        y = 10;
    }
};

int main()
{
    // t1 is set to constant
    const Test t1;

    // trying to change the value
    t1.y = 20;
    cout << t1.y;

    // Uncommenting below lines
    // will throw error
     //t1.x = 8;
    // cout << t1.x;
    return 0;
}
/* Output */
// 20
