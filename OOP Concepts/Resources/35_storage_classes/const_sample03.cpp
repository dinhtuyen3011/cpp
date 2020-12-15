#include <iostream> 
using namespace std;

int main(){
    int q = 5; 
  
    //Valid 
    const int* const p = &q; 
  
    //Compilation error 
    *p = 7; 
      
    int q2 = 7; 
  
    //Compilation error 
    p = &q2;   
      
    return 0;
}