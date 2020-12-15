<<<<<<< HEAD
// Cpp program to illustrate the concept of Constructors 
#include <iostream> 
using namespace std;  
class Person {
	// Private Data member 
=======
#include <iostream>
using namespace std;
class Person {
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
	int id;
	string fullName;

	public:
<<<<<<< HEAD
    // Default Constructor
    Person()
    {
       id = 100;
	   fullName = "IMIC Technology";	   
    }	
	int getId(){
		return id;
	}
	void setId(int id){
		this->id = id;
	}	    
	void setFullName(string fullName){
		this->fullName = fullName;
=======
    Person()
    {
       id = 100;
	   fullName = "IMIC Technology";
    }
	int getId()
	{
        return id;
	}

	void setId(int id)
	{
        this->id = id;
        cout<<"**"
    }

	void setFullName(string fullName)
	{
        this->fullName = fullName;
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
	}

	string getFullName()
	{
		return fullName;
	}
};

int main()
{

    Person obj;

    cout << "id: " << obj.getId() << endl
         << "fullName: " << obj.getFullName()<<endl;

    return 0;
}
/* Output */
// id: 100
// fullName: IMIC Technology
