// bad_alloc example
#include <iostream>     // std::cout
#include <new>          // std::bad_alloc
using namespace std;
int main () {
  try
  {
    int* myarray= new int[10000];
  }
  catch (bad_alloc& ba)
  {
    cerr << "bad_alloc caught: " << ba.what() << '\n';
  }
  return 0;
}
// Exception thrown on failure allocating memory
// bad_alloc caught: bad allocation