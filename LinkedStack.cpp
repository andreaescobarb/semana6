#include "LinkedStack.h"

LinkedStack:: LinkedStack(){
  Start = 0;
}

LinkedStack::~LinkedStack(){
  delete Start;
}

bool LinkedStack::push(object* data){
  Node* temp = new Node(data);
  temp->setNext(Start);
  Start = temp;
  return true;
}

bool LinkedStack::isEmpty(){
  return Start==0;
}

object* LinkedStack::pop(){

  if (!isEmpty()) {
    Node* temp = Start;
    Start = Start->getNext();
    temp->setNext(0);
    object* retValue = temp->getData();
    temp->setData(0);
    delete temp;
    return retValue;
  }

}
