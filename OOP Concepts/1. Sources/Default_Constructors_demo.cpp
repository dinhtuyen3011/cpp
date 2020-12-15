// Cpp program to illustrate the 
// concept of Constructors 
#include <iostream> 
using namespace std; 
  
class Person { 
	int id;
	string fullName;
	public:
    // Default Constructor 
    Person() 
    { 
       id = 100;
	   fullName = "IMIC Technology";	   
    }
	int getId(){
		return id;
	}	    
	void setFullName(string fullName){
		this->fullName = fullName;
	}
	string getFullName(){
		return fullName;
	}
}; 

int main() 
{ 
    // Default constructor called automatically 
    // when the object is created 
    Person obj;
	
	// Print object information 
    cout << "id: " << obj.getId() << endl 
         << "fullName: " << obj.getFullName()<<endl;    
		  
    return 0; 
} 
/* Output */
// id: 100
// fullName: IMIC Technology
