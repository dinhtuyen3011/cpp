#ifndef OBJECTH_H_INCLUDED
#define OBJECTH_H_INCLUDED
extern int global1;
// object.h file, the header file
// extern global variable, external to object.cpp
extern int global1;
// class declaration part
class object
{
  public:
      int   objectvar;

  public:
      object(void);
      int set(int);
      ~object(void);
};
#endif // OBJECTH_H_INCLUDED

