#include <iostream> 
#include<string>   
using namespace std; 
  
class Pet {
public:
    virtual string getDescription() const {
        return "This is Pet class"; 
    }
};
  
class Dog : public Pet { 
public: 
    virtual string getDescription() const { 
        return "This is Dog class"; 
    } 
}; 
  
void describe(Pet p) {
    cout<<p.getDescription()<<endl; 
} 
  
int main() { 
    Dog d; 
    describe(d); 
    return 0; 
}
/* Output */
This is Pet Class

