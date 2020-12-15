#include <iostream>
using namespace std;
#include<iostream>
class Person
{
	static int a;
	int x;
    public:
    Person() {
    	cout<<"ha ha hi hi";
	}
    static int f();
};
int Person::f()
{
    	cout<<"He he";
        // statement
      cout<<a;
    {
        cout<<"aaaaa";
    }
    return 6;
};

int Person::a;
int main()
{
<<<<<<< HEAD
    //Person::f();
    return 0;
=======
    cout<<Person::f();
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
	// calling member function directly with class name
}
