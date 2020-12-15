<<<<<<< HEAD
#include<iostream>
using namespace std;
class Test
{
    public:
    Test() {}
    Test(const Test &t)
    {
        cout<<"Copy constructor called "<<endl;
    }

    Test& operator = (const Test &t)
    {
        cout<<"Assignment operator called "<<endl;
        return *this;
    }
};

// Driver code
int main()
{
    Test t1, t2;
    t2 = t1;
    Test t3 = t1;
    return 0;
=======
#include<iostream>    
using namespace std; 
class Test  
{  
    public:  
    Test() {}  
    Test(const Test &t)  
    {  
        cout<<"Copy constructor called "<<endl;  
    }  
      
    Test& operator = (Test &t) 
    { 
        cout<<"Assignment operator called "<<endl; 
        return *this; 
    }  
};  
  
// Driver code 
int main()  
{  
    Test t1, t2;
    Test tt;  
    t2 = t1;          //Assignment
    cout<<"-address:"<<&t2<<endl;
    cout<<"-address:"<<&t1<<endl;
    Test t3 = t1;    //Copy
    cout<<"-address:"<<&t3<<endl;
    Test t4 = tt;   //Copy
    cout<<"-address:"<<&t4<<endl;  
       
    return 0;  
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
}
/* Output *//*
Assignment operator called 
-address:0x61ff0e
-address:0x61ff0f
Copy constructor called    
-address:0x61ff0d
Copy constructor called    
-address:0x61ff0c
*/
