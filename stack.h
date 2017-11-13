#ifndef Stack_h
#define Stack_h

class Stack{
public:
  virtual bool push(char)=0;
  virtual char pop()=0;
  virtual bool isEmpty()=0;
};

#endif
