/* Program to swap data using function templates */
#include <iostream>
using namespace std;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

template <typename T>

=======
 
template <typename T>
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
 
template <typename T>
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
 
template <typename T>
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
 
template <typename T>
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
 
template <typename T>
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
void func_swap(T &arg1, T &arg2)
{
  T temp;
  temp = arg1;
  arg1 = arg2;
  arg2 = temp;
}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

template <typename T>
T tinh(T a, T b)
{
    T x;
    return (a>b)?a:b;
}
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
int main()
{
  int num1 = 10, num2 = 20;
  double d1 = 100.53, d2 = 435.54;
  char ch1 = 'A', ch2 = 'Z';
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

  cout<<'A';

=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
   
  cout << "Original data\n";
  cout << "num1 = " << num1 << "\tnum2 = " << num2<<endl;
  cout << "d1 = " << d1 << "\td2 = " << d2<<endl;
  cout << "ch1 = " << ch1 << "\t\tch2 = " << ch2<<endl;
   
  func_swap(num1, num2);
  func_swap(d1, d2);
  func_swap(ch1, ch2);
   
  cout << "\n\nData after swapping\n";
  cout << "num1 = " << num1 << "\tnum2 = " << num2<<endl;
  cout << "d1 = " << d1 << "\td2 = " << d2<<endl;
  cout << "ch1 = " << ch1 << "\t\tch2 = " << ch2<<endl;
   
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
  return 0;
}
/* Output *//*
Original data
num1 = 10 num2 = 20
d1 = 100.53 d2 = 435.54
ch1 = A ch2 = Z

Data after swapping
num1 = 20 num2 = 10
d1 = 435.54 d2 = 100.53
ch1 = Z ch2 = A
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
