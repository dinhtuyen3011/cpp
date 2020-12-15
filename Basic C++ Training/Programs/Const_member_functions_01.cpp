#include<iostream> 
using namespace std; 
  
class Test {
    int value; 
public: 
    Test(int v = 0) {value = v;} 
      
    // compiler error neu thay doi gia tri value = 100      
    int getValue() const {return value;}   
}; 
  
int main() {      
    return 0; 
} 
