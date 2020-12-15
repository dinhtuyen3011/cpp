/* A simple and complete C++ program to demonstrate global friend */
#include <iostream>   
class A { 
    int a;   
public: 
    A():a(5) {} 
  
    // global friend function 
    friend void showA(A& x); 
}; 
  
void showA(A& x) 
{ 
    // Since showA() is a friend, it can access 
    // private data members of A 
    std::cout << "A::a=" << x.a; 
} 
  
int main() 
{ 
    A a; 
    showA(a); 
    return 0; 
}
/* Output */
// A::a=5
