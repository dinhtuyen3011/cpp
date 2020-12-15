// C++ program to demonstrate private access modifier
#include<iostream>
using namespace std;

class Circle
{
    // private data member
    private:
        double radius;

    // public member function
    public:
        double  compute_area()
        {   // member function can access private
            // data member radius
            radius=15;
            return 3.14*radius*radius;
        }

};

// main function
int main()
{
    // creating object of the class
    Circle obj;
    // trying to access private data member
    // directly outside the class
   // obj.radius = 1.5;
    cout << "Area is:" << obj.compute_area();
    return 0;
}
/* Output *//*
In function 'int main()':
11:16: error: 'double Circle::radius' is private
         double radius;
                ^
31:9: error: within this context
     obj.radius = 1.5;
         ^
*/
