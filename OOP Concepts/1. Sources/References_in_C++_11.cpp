/* Passing “pointer to a pointer” as a parameter to function */
#include <iostream>

using namespace std;

int global_var = 42;

// function to change pointer to pointer value
void changePointerValue(int** ptr_ptr)
{
    cout<<"-> ptr_ptr before:"<<*ptr_ptr<<endl;
    *ptr_ptr = &global_var;
    cout<<"-> ptr_ptr after:"<<*ptr_ptr<<endl;
    cout<<"-> global_var:"<<*ptr_ptr<<endl;
}

int main()
{
    int var = 23;
    int* pointer_to_var = &var;

    cout << "-> var :" << &var << endl;
    cout << "-> pointer_to_var :" << pointer_to_var << endl;

    cout << "Passing a pointer to a pointer to function " << endl;

    cout << "-> Value 01 = " << *pointer_to_var << endl; // display 23

    cout << "-> Before:" << pointer_to_var << endl;
    changePointerValue(&pointer_to_var);
    cout << "-> After:" << pointer_to_var << endl;

    cout << "-> Value 02 = " << *pointer_to_var << endl; // display 42

    return 0;
}
/* Output */
-> var :0x70fe0c
-> pointer_to_var :0x70fe0c
Passing a pointer to a pointer to function
-> Value 01 = 23
-> Before:0x70fe0c
-> ptr_ptr before:0x70fe0c
-> ptr_ptr after:0x472010
-> global_var:0x472010
-> After:0x472010
-> Value 02 = 42
