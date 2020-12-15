<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
using namespace std;

template <typename T>
T myMax(T x,T y)
{
   return (x > y)? x: y;
}

int main()
{
  cout << myMax('b',7) <<" ";        // Call myMax for int
  //cout << myMax<double>(3.0, 7.0) <<" "; // call myMax for double
  //cout << myMax<char>('i', 't') <<" ";   // call myMax for char
  return 0;
}
/* Output */
// 7 7 t
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
#include <iostream> 
using namespace std; 

template <typename T> 
T myMax(T x, T y) 
{ 
   return (x > y)? x: y; 
} 
  
int main() 
{ 
  cout << myMax<int>(3, 7) <<" ";        // Call myMax for int 
  //cout << myMax<double>(3.0, 7.0) <<" "; // call myMax for double 
  //cout << myMax<char>('i', 't') <<" ";   // call myMax for char   
  return 0; 
}
/* Output */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// 7 7 t 
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
// 7 7 t 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
// 7 7 t 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
// 7 7 t 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
// 7 7 t 
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
