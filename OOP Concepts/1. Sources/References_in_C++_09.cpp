#include<iostream> 
using namespace std; 
  
class base { 
public: 
    virtual void show() {  // Note the virtual keyword here 
        cout<<"In base \n"; 
    } 
};   
  
class derived01: public base { 
public: 
    void show() { 
        cout<<"In derived 01 \n"; 
    } 
};

class derived02: public base { 
public: 
    void show() { 
        cout<<"In derived 02 \n"; 
    } 
}; 
  
// Since we pass b as reference, we achieve run time polymorphism here. 
void print(base &b) { 
    b.show(); 
} 
  
int main(void) { 
    derived01 d1;
    derived02 d2; 
    
    print(d1); 
    print(d2); 
    
    return 0; 
}
/* Output */
In derived 01
In derived 02
