#include "Node.h"

Node::Node(object* data){
  Data = data;
  Next = 0;
}

object* Node::getData(){
  return Data;
}

void Node::setData(object* data){
  Data = data;
}

Node* Node::getNext(){
  return Next;
}

void Node::setNext(Node* next){
  Next = next;
}

Node::~Node(){
  if (Data!=0) {
    delete Data;
  }
  if (Next!=0) {
    delete Next;
  }
}
