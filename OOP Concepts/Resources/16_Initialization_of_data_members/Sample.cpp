<<<<<<< HEAD
#include<iostream>
using namespace std;
class Test {
  private:
    int x = 0;
    int y = 0;
  public:
    Test() : x(50),y(x+ 10) {}
    void print();
};

void Test::print()
{
   cout<<"x = "<<x<<" y = "<<y;
}

int main()
{
    Test t;
    t.print();
    return 0;
=======
#include<iostream>  
using namespace std; 
  
<<<<<<< HEAD
class Test {  

  private:
    int x = 0;      
    int y = 0;        

=======
class Test { 
  private:   
    int x = 0;    
    int y = 0;   
<<<<<<< HEAD
<<<<<<< HEAD
  public: 
    Test() : y(x+ 10), x(10) {} 
=======

  public: 
    Test() : y(x+10),
	x(10) { } 
>>>>>>> dev01
=======
>>>>>>> c6d6c5d1a6cba550fb90d71afaaa5fe370030ffe
  public: 
    Test() : y(x+ 10),x(50) {} 
>>>>>>> dev03
    void print(); 
}; 
  
void Test::print() 
{  
   cout<<"x = "<<x<<" y = "<<y;  
} 
  
int main() 
{ 
    Test t; 
    t.print();      
    return 0;     
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
}
/* Output */
// x = 10 y = 10
