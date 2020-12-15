// out_of_range example
#include <iostream>       // std::cerr
#include <stdexcept>      // std::out_of_range
#include <vector>         // std::vector
using namespace std;
int main (void) {
  vector<int> myvector(10);
  try {
    myvector.at(20)=100;      // vector::at throws an out-of-range
  }
  catch (const out_of_range& oor) {
    cerr << "Out of Range error: " << oor.what() << '\n';
  }
  return 0;
}
/* Output */
// Out of Range error: vector::_M_range_check: __n (which is 20) 
// >= this->size() (which is 10)