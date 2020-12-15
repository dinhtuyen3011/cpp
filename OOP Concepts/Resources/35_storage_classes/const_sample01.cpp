#include <iostream> 
using namespace std;

int main(){
    int q = 5; 
    int const* p = &q;  // pointer to constant integer
  
    //Compilation error 
    *p = 7; 
  
    int q2 = 7; 
    
    //Valid 
    p = &q2; 
      
    return 0;
}
