/* 
Constant Member Function
	When declaring a member function with the const keyword, this specifies that it 
is a read only function that does not modify the object (notice the differences 
between variable versus object) for which it is called.
	A constant member function cannot modify any data members or call any member 
functions that are not constant.
	Implicitly, the const has set the ‘can’t modify’ *this pointer.  This can be 
changed by using the mutable (preferred) or const_cast operator.
	Pointer to constant data can be used as function parameters to prevent the 
function from modifying a parameter passed through a pointer.
	Place the const keyword after the closing parenthesis of the argument list.
	const keyword is required in both the declaration and the definition.

*/
#include <iostream>
using namespace std;
 
// a class declaration part
class Date
{
   int  month;
   public:       
       Date (int mnt, int dy, int yr);       
       void SetMonth(int mnt);      
       int GetMonth() const;
};
 
Date::Date(int,int,int)
{ }
 
void  Date::SetMonth(int mnt)
{   
    month = mnt;
}

int  Date::GetMonth() const
{  
   return  month;
}
 
// the main program
int main()
{
    Date TheDate(7,4,2004);     
    TheDate.SetMonth(11);
    cout<<"Month of the sample date is "<<TheDate.GetMonth()<<endl;
    
    const Date BirthDate(7,4,1971);     
    BirthDate.GetMonth();      
    cout<<"Another silly call, the month is "<<BirthDate.GetMonth()<<endl;
    return 0;
}
/* Output */
// Month of the sample date is 11
// Another silly call, the month is 1
