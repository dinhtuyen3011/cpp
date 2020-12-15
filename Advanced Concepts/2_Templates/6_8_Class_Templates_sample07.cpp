#include <iostream>
#include <string>
using namespace std;

template<typename T>
T summation(T val) {
  return val;
}

// template<typename T, typename... Args>
// T summation(T first, Args... args) {
//   return first + summation(args...);
// }

template<typename T, typename ...Args>
T summation(T first, Args ... args)
{
  return first + summation(args...); 
}
int main()
{
  long sum = summation(1, 2, 3, 8, 7);
  cout<<"Sum of long numbers = "<<sum<<endl;

  string s1 = "H", s2 = "e", s3 = "ll", s4 = "o";
  string s_concat = summation(s1, s2, s3, s4);
  cout<<"Sum of strings = "<<s_concat <<endl;

  int a = 5,b = 10,c = 15,d = 20,e = 25;
  int result = summation(a,b,c,d,e);
  cout<<"Sum of int = "<<result <<endl;
}
/* Output *//*
Sum of long numbers = 21
Sum of strings = Hello
Sum of int = 75
*/
