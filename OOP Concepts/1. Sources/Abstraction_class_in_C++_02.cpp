#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Employee {
   public:
       Employee(const string first, const string last);
       ~Employee();

       string getFirstName() const;
       string getLastName() const;

       virtual double earnings() const=0;  // pure virtual => abstract class
       virtual void print() const;

  private:
       string firstname;
       string lastname;
};

Employee::Employee(const string first, const string last){
    firstname = first;
    lastname = last;
}

Employee::~Employee(){
    cout << "Employee destructed" << endl;
}

string Employee::getFirstName() const{ return firstname; }
string Employee::getLastName() const{ return lastname; }

void Employee::print() const{
  cout << "Name: " << getFirstName() << " " << getLastName() << endl;
}

class Manager:public Employee{
   public:
      Manager(string firstname, string lastname, double salary):
    Employee(firstname,lastname),salary(salary){}

      ~Manager(){}

      double earnings() const {return salary;}

   private:
      double salary;
};

int main(){

  Manager obj("Katie Andrew","Thomas",23000);
  obj.print();
  cout << "has Salary : " << obj.earnings() << endl;
  return 0;
}
/* Output */
Name: Katie Andrew Thomas
has Salary : 23000
Employee destructed

