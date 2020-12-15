/* Example 5 : Overloading this .(dot) operator */
// C++ program to illustrate 
// Overloading this .(dot) operator 
#include <iostream> 
#include <iostream> 
class cantover { 
public: 
    void fun(); 
}; 
class X { // assume that you can overload . 
    cantover* p; 
    cantover& operator.() 
    { 
        return *p; 
    } 
    void fun(); 
}; 
void g(X& x) 
{ 
    x.fun(); // X::fun or cantover::fun or error? 
} 
