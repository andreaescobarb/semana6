#ifndef object_h
#define object_h
#include <string>

class object{
  virtual bool equals()=0;
  virtual string toString()=0;
}
