#ifndef object_h
#define object_h
#include <string>

using namespace std;

class object{
public:
  virtual bool equals(object*)=0;
  virtual string toString()=0;
};
#endif
