#ifndef Nodo_h
#define Nodo_h
#include "object.h"

class Node{
  private:
    object* Data;
    Node* Next;

  public:
    Node(object*);
    object* getData();
    void setData(object*);
    Node* getNext();
    void setNext(Node*);
    ~Node();
};

#endif
