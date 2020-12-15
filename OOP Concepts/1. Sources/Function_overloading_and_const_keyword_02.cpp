// PROGRAM 1 (Fails in compilation) 
#include<iostream> 
using namespace std; 
  
void fun(const int i) 
{ 
    cout << "fun(const int) called "; 
} 
void fun(int i) 
{ 
    cout << "fun(int ) called " ; 
} 
int main() 
{ 
    const int i = 10; 
    fun(i); 
    return 0; 
} 
/* Output */
// Compiler Error: redefinition of 'void fun(int)'

// PROGRAM 2 (Compiles and runs fine) 
#include<iostream> 
using namespace std; 
  
void fun(char *a) 
{ 
  cout << "non-const fun() " << a; 
} 
  
void fun(const char *a) 
{ 
  cout << "const fun() " << a; 
} 
  
int main() 
{ 
  const char *ptr = "IMIC Technology"; 
  fun(ptr); 
  return 0; 
} 
/* Output */
// const fun() IMIC Technology

// PROGRAM 3 (Compiles and runs fine)
#include<iostream> 
using namespace std; 
  
void fun(const int &i) 
{ 
    cout << "fun(const int &) called "; 
} 
void fun(int &i) 
{ 
    cout << "fun(int &) called " ; 
} 
int main() 
{ 
    const int i = 10; 
    fun(i); 
    return 0; 
}
/* Output */
// fun(const int &) called
