/* Passing pointer to a function */

#include <iostream>
using namespace std;

int global_Var = 42;

// function to change pointer value
void changePointerValue(int* pp)
{
    cout<<"-> pp before:"<<pp<<endl;
    pp = &global_Var;
    cout<<"-> pp after:"<<pp<<endl;
}

int main()
{
    int var = 23;
    int* ptr_to_var = &var;

    cout<<"-> ptr_to_var:"<<ptr_to_var<<endl;
    cout<<"-> var:"<<&var<<endl;

    cout << "Passing Pointer to function:" << endl;

    cout << "-> Before :" << *ptr_to_var << endl; // display 23

    cout<<"-> Before 02:"<<ptr_to_var<<endl;

    changePointerValue(ptr_to_var);

    cout << "-> After 02:" << ptr_to_var << endl; // display 23

    return 0;
}
/* Output */
-> ptr_to_var:0x70fe04
-> var:0x70fe04
Passing Pointer to function:
-> Before :23
-> Before 02:0x70fe04
-> pp before:0x70fe04
-> pp after:0x472010
-> After 02:0x70fe04
