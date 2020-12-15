#include <iostream> 
using namespace std;

int main(){
    int q = 5; 
    //Compilation error 
    int *const p = &q;  // constant pointer to integer
  
    //Valid 
    *p = 7;  
  
    int q2 = 7; 
  
    //Compilation error 
    p = &q2;  
   
      
    return 0;
}