#include<iostream>
using namespace std;
struct Student {
   string name;
   string address;
   int rollNo;
//    void PrintInfo() const{
//        rollNo = 200;
//    }
<<<<<<< HEAD
};

// If we remove & in below function, a new
// copy of the student object is created.
// We use const to avoid accidental updates
// in the function as the purpose of the function
// is to print s only.
void print(const Student s)
{
    //s.rollNo = 200;
    cout << s.name << "  " << s.address << "  " << s.rollNo;
=======
}; 
  
// If we remove & in below function, a new 
// copy of the student object is created.  
// We use const to avoid accidental updates 
// in the function as the purpose of the function 
// is to print s only. 
void print(const Student &s) 
{ 
    s.rollNo = 200;
    cout << s.name << "  " << s.address << "  " << s.rollNo; 
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
}
int main(){
    Student s;
    s.name = "IMIC";
    s.rollNo = 100;
    s.address = "abc";
    print(s);
    return 0;
}
