#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Employee {
   public:
       Employee(const char*, const char*);
       ~Employee();
       const char* getFirstName() const;
       const char* getLastName() const;


       virtual double earnings() const=0;  // pure virtual => abstract class
       virtual void print() const;

  private:
       char* firstname;
       char* lastname;
};

Employee::Employee(const char* first, const char* last){
   firstname= (char*) malloc((strlen(first)+1)*sizeof(char));
   lastname= (char*) malloc((strlen(last)+1)*sizeof(char));
   strcpy(firstname,first);
   strcpy(lastname,last);
}

Employee::~Employee(){
   free(firstname);
   free(lastname);
   cout << "Employee destructed" << endl;
}

const char* Employee::getFirstName() const{ return firstname;}
const char* Employee::getLastName() const{ return lastname; }

void Employee::print() const{
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
}

class Manager:public Employee{
   public:
      Manager(char* firstname,char* lastname,double salary):
          Employee(firstname,lastname),salary(salary){}

      ~Manager(){}

      double earnings() const {return salary;}

   private:
      double salary;          
};

int main(){
   Manager Object("Katie Andrew","Thomas",23000);    
   Object.print();
   cout << "has Salary : " << Object.earnings() << endl;

    return 0;
}
