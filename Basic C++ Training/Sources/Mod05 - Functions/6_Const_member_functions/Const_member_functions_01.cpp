#include<iostream> 
using namespace std; 
int test = 100;
class Test {
    int value; 
public: 
    Test(int v = 0) {value = v;} 
      
    // compiler error neu thay doi gia tri value = 100      
    int getValue() const {
        int a = 100;
        a = a + 1;
        test = 200;        
        return a;
    }   
}; 
  
int main() {    
    Test t;
    cout<<t.getValue();  
    return 0; 
} 
