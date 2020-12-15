// A program with virtual destructor
#include<iostream>
using namespace std;
class base {
<<<<<<< HEAD
<<<<<<< HEAD
  public:
    base()
    { cout<<"Constructing base \n"; }
<<<<<<< HEAD
    //virtual ~base()
    //{ cout<<"Destructing base \n"; }
    virtual void PrintInfo(){}
=======
    ~base()
    { cout<<"Destructing base \n"; }
    virtual void PrintInfo(){}
};
class derived: public base {
  public:
  	int a=10;
    derived()
    { cout<<"Constructing derived \n"; }
>>>>>>> master
=======
  public:   
=======
  public:
<<<<<<< HEAD
>>>>>>> dev04
=======
>>>>>>> 8139f7fb3e625d305450f8b5dc2f0c2ef5ea266d
>>>>>>> master
    virtual ~base()
    { cout<<"Destructing base \n"; }
    //virtual void PrintInfo(){}
};
class derived: public base {
  public:
    derived()
    { cout<<"Constructing derived \n"<<this; }
    ~derived()
    { cout<<"Destructing derived \n"<<this; }
    void PrintInfo(){cout<<"This is Print Info function!"<<this<<endl;}
    {
      cout<<"Destructing base \n";
    }
    // ~base()
    // {
    //   cout<<"Destructing base \n";
    // }
};
class derived: public base {
    {
      cout<<"Destructing base \n";
    }
    // ~base()
    // {
    //   cout<<"Destructing base \n";
    // }
};
class derived: public base {
    {
      cout<<"Destructing base \n";
    }
    // ~base()
    // {
    //   cout<<"Destructing base \n";
    // }
};
class derived: public base {
    {
      cout<<"Destructing base \n";
    }
    // ~base()
<<<<<<< HEAD
    // { 
    //   cout<<"Destructing base \n"; 
    // }    
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
    // {
    //   cout<<"Destructing base \n";
    // }
>>>>>>> dev04
};
class derived: public base {
<<<<<<< HEAD
  public:   
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
    {
      cout<<"Destructing base \n";
    }
    // ~base()
    // {
    //   cout<<"Destructing base \n";
    // }
};
class derived: public base {
    {
      cout<<"Destructing base \n";
    }
    // ~base()
    // {
    //   cout<<"Destructing base \n";
    // }
};
class derived: public base {
    {
      cout<<"Destructing base \n";
    }
    // ~base()
    // {
    //   cout<<"Destructing base \n";
    // }
};
class derived: public base {
  public:
>>>>>>> 8139f7fb3e625d305450f8b5dc2f0c2ef5ea266d
    ~derived()
<<<<<<< HEAD
<<<<<<< HEAD
    { cout<<"Destructing derived \n"; }
    void PrintInfo(){cout<<"This is Print Info function!"<<endl;}
    int geta(int a=11) {return a;}
=======
    {       
      cout<<"Destructing derived \n"; 
    } 
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
    {
      cout<<"Destructing derived \n";
    }
>>>>>>> dev04
};
int main(void)
{
<<<<<<< HEAD
  //derived *d = new derived();
  base *b = new derived();
=======
  derived *d = new derived();
<<<<<<< HEAD
<<<<<<< HEAD
  base *b = d;
<<<<<<< HEAD
>>>>>>> 0239173d06b6362f7178107c33b52e9a5803f527
  b->PrintInfo();  
  delete b;  
  cout<<"sahjs "<<d->geta();
=======
  b->PrintInfo();  
  cout<<d->a<<endl;
  delete b;  
  cout<<d->a;
>>>>>>> master
=======
  base *b = d; 
  delete b;   
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
  base *b = d;
  d->PrintInfo();
  delete b;
<<<<<<< HEAD
>>>>>>> dev04
=======
>>>>>>> 8139f7fb3e625d305450f8b5dc2f0c2ef5ea266d
>>>>>>> master
  return 0;
}
/* Output *//*
  1. Virtual:
  Destructing derived
  Destructing base

  2. Non Virtual:
  Destructing base
*/
