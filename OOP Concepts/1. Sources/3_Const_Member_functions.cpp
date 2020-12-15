// const member function in C++ program
#include <iostream>
using namespace std;

class Product
{
	//Data member
      int id;
      float cost;
public:
      //constructor
      Product(int id, float cost)
      {
    	   //this-><data member> = <param>
           this->id = id;
           this->cost = cost;
      }
      /*---------------------------------------
      *Getter and setter of class data members
      */      
      void setId(const int id)
      {
            this->id = id;
      }  
      //This method cannot modify any data member of this class
      //If we try to modify them then compiler will flash an error l-value specifies const object      
      int getId() const
      {
            //if try to modify any data member id here the compiler will
            //flash error e.g.            
            this->id = 20; //error

            //Also cannot call non static function
            //of this class in here e.g.
            setId(50); //error
            return id;
      }
      //Print data
      void print()
      {
             cout<<"Product Id : "<<this->id;
             cout<<" Cost : "<<this->cost<<endl;
      }
};
int main()
{
      int id = 1234;
      float cost = 100.00;
      Product p(id,cost);  
      p.getId();
      p.print();        
      return 0;
}
/* Output */
// Product Id : 1234 Cost : 100
