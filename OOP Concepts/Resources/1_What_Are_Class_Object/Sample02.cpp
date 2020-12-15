// C++ program to demonstrate accessing of data members   
#include <iostream> 
using namespace std; 

class Person00 
{ 
    // Access specifier 
    public: 
    Person00(int x=0 )
    {
        ++x; 
       cout << x << "khoitao00" << endl; 
    }
   
    ~Person00() 
    { 
        x--;
       cout << x << "thoat00" << endl ; 
    }
    public:
    int x;
}; 
class Person01 : public Person00
{ 
    // Access specifier 
    public: 
    Person01():obj1{6}
    {
       cout << "khoitao" << endl; 
    }
    ~Person01() 
    { 
       cout << "thoat" << endl ; 
    }
    private:
    Person00 obj1;
}; 
  
int main() { 
  
    // Declare an object of class geeks 
    Person01 obj; 
    
    return 0; 
}
/* Output */
// fullname is: IMIC Technology
