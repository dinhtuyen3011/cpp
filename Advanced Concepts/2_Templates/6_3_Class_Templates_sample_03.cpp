#include <iostream>
using namespace std;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
 
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
template <class T>
class myclass {
  T a, b;
  T c;
 public:
  myclass (T first, T second, T three)
     {a = first; b = second; c = three;}
  T getMaxval ();
  T increament ();
};

template <class T>
T myclass<T>::getMaxval()
{
  return (a>b? a : b);
}
template <class T>
T myclass<T>::increament()
{
  return ++c;
}
int main() {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  myclass <int> myobject(6,5,9);
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;

=======
  myclass<int> myobject(100, 75,50);
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;
    
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
  myclass<int> myobject(100, 75,50);
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;
    
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
  myclass<int> myobject(100, 75,50);
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;
    
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
  myclass<int> myobject(100, 75,50);
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;
    
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
  myclass<int> myobject(100, 75,50);
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;
    
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
  myclass<char> mychobject1('A','a','c');
  cout<<"Maximum of 'A' and 'a' = "<<mychobject1.getMaxval()<<endl;
  myclass<int> mychobject2(100,50,110);
  cout<<"Increamented for c: "<<mychobject2.increament()<<endl;
  return 0;
}
/* Output *//*
Maximum of 100 and 75 = 100
Maximum of 'A' and 'a' = a
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
