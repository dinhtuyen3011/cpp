// bad_cast example
#include <iostream>       // std::cout
#include <typeinfo>       // std::bad_cast
using namespace std;
class Base {virtual void member(){}};
class Derived : Base {};
int main () {
  try
  {
    Base b;
    Derived& rd = dynamic_cast<Derived&>(b);
  }
  catch (bad_cast& bc)
  {
     cerr << "bad_cast caught: " << bc.what() << '\n';
  }
  return 0;
}
// Exception thrown on failure to dynamic cast
// bad_cast caught: std::bad_cast
// The run-time check fails if the object would be an 
// incomplete object of the destination type.