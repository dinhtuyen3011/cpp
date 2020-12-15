

// Program 4 
#include <iostream> 
  
class Base { 
  public: 
    int x; 
}; 
  
struct Derived : Base {}; 
// is equilalent to struct Derived : public Base {} 
int f(){
   //std::cout<<"a";
}
int main() 
{ 
  Derived d; 
  d.x = 20; // works fine becuase inheritance is public  
  std:: cout<<d.x<<f();
  return 0;
} 
