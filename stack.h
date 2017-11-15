#ifndef Stack_h
#define Stack_h

#include "object.h";

class Stack{
public:
  virtual bool push(object*)=0;
  virtual object* pop()=0;
  virtual bool isEmpty()=0;
};

#endif
