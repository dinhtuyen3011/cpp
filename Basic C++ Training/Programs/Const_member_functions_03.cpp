#include <iostream> 
using namespace std; 
class Demo 
{ 
    int value; 
    public: 
    Demo(int v = 0) {value = v;} 
    void showMessage() { 
        cout<<"Show Message function"<<endl; 
    } 
    void display() const { 
        cout<<"Display function"<<endl; 
    } 
}; 

int main() 
{   
    const Demo d1; 
    //d1.showMessage();  //Error 
    d1.display(); 
    return(0); 
}
/* Output *//*
Display function
*/

