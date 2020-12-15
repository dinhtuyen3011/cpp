// Program 3 
#include <stdio.h> 
  
class Base { 
   public: 
    int x; 
}; 
  
class Derived : Base { }; 
// is equilalent to class Derived : private Base {} 
  
int main() 
{ 
  Derived d; 
  d.x = 20; // compiler error becuase inheritance is private 
  getchar(); 
  return 0; 
} 

// Program 4 
#include <stdio.h> 
  
class Base { 
  public: 
    int x; 
}; 
  
struct Derived : Base {}; 
// is equilalent to struct Derived : public Base {} 
  
int main() 
{ 
  Derived d; 
  d.x = 20; // works fine becuase inheritance is public 
  getchar(); 
  return 0; 
} 
