#include <iostream>
using namespace std;

template <typename T>
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
<<<<<<< HEAD
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
class Weight{
	private:
		T kg;
		T name1;
	public:
		void setData(T x){
			kg = x;
		}
		T getData(){
			return kg;
		}
		void set_name1(T a)
		{
			this->name1 = a;
		}
		T get_name1()
		{
			return name1;
		}
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
=======
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
class Weight
{
private:
	T kg;

public:
	void setData(T x)
	{
		kg = x;
	}
	T getData()
	{
		return kg;
	}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> d6f475ec36066eefd881f74c50f19b1623faa514
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
>>>>>>> d6f475ec36066eefd881f74c50f19b1623faa514
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> d6f475ec36066eefd881f74c50f19b1623faa514
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> d6f475ec36066eefd881f74c50f19b1623faa514
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> d6f475ec36066eefd881f74c50f19b1623faa514
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
};

template <typename T>
class Base
{
	T kg;

public:
	void set(T a)
	{
		kg = a;
	}
	T get()
	{
		return kg;
	}
};

int main()
{
	Weight<int> obj1;
	obj1.setData(10.5);
	cout << "Value is: " << obj1.getData() << endl;

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
	Weight<int> obj3;
	obj3.set_name1(15);
	cout<<"New name is "<<obj3.get_name1();
   return 0;
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
=======
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
	Weight<double> obj2;
	obj2.setData(8);
	cout << "Value is: " << obj2.getData() << endl;
	Base<float> obj;
	obj.set(7.6);
	cout << "value is: " << obj.get() << endl;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

	cout << "size of: " << typeid(obj.get()).name();
	return 0;

=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
	
	cout << "size of: " << typeid(obj.get()).name();
	return 0;
>>>>>>> d6f475ec36066eefd881f74c50f19b1623faa514
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
}
/* Output */ /*
Value is: 10
Value is: 8.5
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
*/
=======
*/
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
*/
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
*/
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
*/
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
*/
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
