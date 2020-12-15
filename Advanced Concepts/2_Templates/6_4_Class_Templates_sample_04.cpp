#include <iostream>
#include <string>
using namespace std;

// template <typename T> & template <class T> is the same
template <class T>
class myIncrement {
  T value;
  public:
  myIncrement (T arg) {value=arg;}
  T toIncrement () {return ++value;}
};
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
template <>
class myIncrement <char> {
  char a;
  public:
  myIncrement (char arg) {a=arg;}
   char change ()
   {
     if ((a>='a')&&(a<='z'))
        a+='A'-64;
     return a;
   }
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD


template <typename T>
T m;
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======


template <typename T>
T m =6;
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
template <typename T>
class Base {
  T a;
  public:
  Base(T a)
  {
    this->a = a;
  }
  T Increment()
  {
    return ++a;
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
int main () {
  myIncrement<int> myint (7);
  myIncrement<char> mychar ('a');
  myIncrement<double> mydouble(11.0);

  cout<<"Incremented int value: "<< myint.toIncrement()<< endl;
  cout<<"Incremented char value: "<<mychar.change()<< endl;
  cout<<"Incremented double value: "<<mydouble.toIncrement()<< endl;
<<<<<<< HEAD
  //Base<int> obj(10);
  //cout << "incre: " << obj.Increment() << endl; 
=======
  Base<int> obj(10);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  cout << "incre: " << obj.Increment() << endl;
=======
  cout << "incre: " << obj.Increment() << endl; 
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
  cout << "incre: " << obj.Increment() << endl; 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
  cout << "incre: " << obj.Increment() << endl; 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
  cout << "incre: " << obj.Increment() << endl; 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
  cout << "incre: " << obj.Increment() << endl; 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
  return 0;
}
/* Output *//*
Incremented int value: 8
Incremented char value: b
Incremented double value: 12
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
