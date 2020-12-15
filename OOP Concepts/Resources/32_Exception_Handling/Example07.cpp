// bad_exception example
#include <iostream>       // std::cerr
#include <exception>      // std::bad_exception, std::set_unexpected
using namespace std;
void myunexpected () {
  cerr << "unexpected handler called\n";
  throw;
}

void myfunction () throw (int, bad_exception) {
  throw 'x'; // throws char (not in exception-specification)
}

int main (void) {
  set_unexpected (myunexpected);
  try {
    myfunction();
  }
  catch (int) { cerr << "caught int\n"; }
  catch (bad_exception be) { cerr << "caught bad_exception\n"; }
  catch (...) { cerr << "caught some other exception\n"; }
  return 0;
}
// bad_exception
// Exception thrown by unexpected handler
/* Output */
// unexpected handler called
// caught bad_exception