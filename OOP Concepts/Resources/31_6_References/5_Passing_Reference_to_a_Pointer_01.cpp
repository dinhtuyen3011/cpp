/* Passing pointer to a function */

#include <iostream>
using namespace std;

int global_Var = 42;

// function to change pointer value
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> master
void changePointerValue(int*& pp)
=======
void changePointerValue(int* pp)
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
<<<<<<< HEAD
=======
=======
<<<<<<< HEAD
void changePointerValue(int*& pp)
=======
void changePointerValue(int* pp)
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
=======
void changePointerValue(int* pp)
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
>>>>>>> dev02
>>>>>>> master
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
<<<<<<< HEAD
<<<<<<< HEAD
    cout << "-> After 02 - value:" << *ptr_to_var << endl;
=======
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
<<<<<<< HEAD
<<<<<<< HEAD

    cout << "-> After 02 - value:" << *ptr_to_var << endl;
//>>>>>>> 8ac3b0be42a5d3891474741d2bb0c37702402666
=======
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
    cout << "-> After 02 - value:" << *ptr_to_var << endl;
=======
>>>>>>> 8e1c65d51b664efeaa959acce0b4a6cbc6823e62
>>>>>>> a695c5dd2338f8e4f8013b7e8d4eb872b533366d
=======
//<<<<<<< HEAD
//=======
    cout << "-> After 02 - value:" << *ptr_to_var << endl;
//>>>>>>> 8ac3b0be42a5d3891474741d2bb0c37702402666
=======
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
=======
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
>>>>>>> dev02
>>>>>>> master
    return 0;
}
/* Output *//*
-> ptr_to_var:0x61ff0c
-> var:0x61ff0c
Passing Pointer to function:
-> Before :23
<<<<<<< HEAD
<<<<<<< HEAD
-> Before 02:0x6ffe04
-> pp before:0x6ffe04
-> pp after:0x472010
<<<<<<< HEAD
-> After 02:0x70fe04

=======
=======
<<<<<<< HEAD
>>>>>>> a695c5dd2338f8e4f8013b7e8d4eb872b533366d
-> Before 02:0x6ffe04
-> pp before:0x6ffe04
-> pp after:0x472010
-> After 02:0x70fe04
<<<<<<< HEAD
=======
>>>>>>> master
=======
-> Before 02:0x61ff0c
-> pp before:0x61ff0c
-> pp after:0x405004
-> After 02:0x405004 (global_Var = 42)
<<<<<<< HEAD
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
>>>>>>> 8e1c65d51b664efeaa959acce0b4a6cbc6823e62
>>>>>>> a695c5dd2338f8e4f8013b7e8d4eb872b533366d
>>>>>>> master
*/
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
<<<<<<< HEAD
//=======
//-> After 02:0x6ffe04
//*/
//>>>>>>> 8ac3b0be42a5d3891474741d2bb0c37702402666
=======
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
=======
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
>>>>>>> dev02
