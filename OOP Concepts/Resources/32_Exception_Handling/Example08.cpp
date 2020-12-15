// bad_typeid example
#include <iostream>       // std::cout
#include <typeinfo>       // operator typeid, std::bad_typeid
using namespace std;
class Polymorphic {virtual void Member(){}};

int main () {
  try
  {
    //typeid(a) -> i, d,...
    Polymorphic * pb = 0;
	cout << typeid(*pb).name();
  }
  catch (bad_typeid& bt)
  {
    cerr << "bad_typeid caught: " << bt.what() << '\n';
  }
  return 0;
}
// bad_typeid
// Exception thrown on typeid of null pointer
/* Output */
// bad_typeid caught: std::bad_typeid