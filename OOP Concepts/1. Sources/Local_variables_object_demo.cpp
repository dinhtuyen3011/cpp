#include <iostream>
#include "objecth.h"
using namespace std;

// extern...
int global1 = 30;
int global2 = 40;
object::object(void)
{
    objectvar = 0;
}

int object::set(int newvalue)
{
      int local1 = 10;
      // non extern with same variables name....
      global1 = 60;
      global2 = 70;

      // display the local variable locally...
      cout<<"In object.cpp file, local function, local1 variable = "<<local1<<endl;

      // display the global variable locally...
      cout<<"In object.cpp file, global1 variable = "<<global1<<endl;
      cout<<"In object.cpp file, global2 variable = "<<global2<<endl;
      return  newvalue;
}

object::~object(void)
{
   objectvar = 0;
}

int main()
{
   object   FirstObject;
   extern int global2;
   // local to this main() function...
   int local2 = 20;
   cout<<"In object.h, global1 is object.cpp external variable = "<<global1<<endl;
   cout<<"In mainobject.cpp, global2 is object.cpp external variable =  "<<global2<<endl;

   cout<<"In mainobject.cpp, object value =  "<<FirstObject.set(50)<<"\n";
   cout<<"In mainobject.cpp, local function, local2 variable = "<<local2<<endl;    return 0;
}

