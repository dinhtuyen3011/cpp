<<<<<<< HEAD
#include <iostream>   
using namespace std;  
  
class A  
{  
    int x = 5;                //private data member
    friend class B;           //friend class.     
};  
<<<<<<< HEAD

=======
>>>>>>> dev02
=======
#include <iostream>
using namespace std;

class A
{
    int x = 5;                //private data member
>>>>>>> 8139f7fb3e625d305450f8b5dc2f0c2ef5ea266d
    friend class B;           //friend class.
};
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304

class B
{
  int a = 10;
  public:
    void display(A t)
    {
    	// Since B is friend of A, it can access
        // private data members of A
        cout<<"value of x is : "<<t.x;
    }
};

int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}
/* Output */
// value of x is : 5
