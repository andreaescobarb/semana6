#ifndef LinkedStack_h
#define LinkedStack_h

#include "stack.h"

class LinkedStack: public Stack{
  private:
    Node* Start;

  public:
    LinkedStack();
    virtual bool push(object*);
    virtual object* pop();
    virtual bool isEmpty();
};


#endif
