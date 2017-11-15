#include "stack.h"
#include "object.h"
#include "figura.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include <iostream>
#include <string>

//typeinfo
#include <typeinfo>

using namespace std;

int main(int argc, char const *argv[]) {
  object* obj = new Rectangulo(5,5);
  //cout<<"Area: "<<obj->toString();

  cout<<"El objeto es un: "<<typeid(obj).name()<<endl;
  cout<<"El objeto es un: "<<typeid(*obj).name()<<endl;

  if (typeid(*obj) == typeid(Rectangulo)) {
    Rectangulo* rectangulo = dynamic_cast<Rectangulo*>(obj);

    cout<<"El objeto es un Rectangulo, su area es: "<<rectangulo->getArea()<<endl;

    object* rectangulo2 = new Rectangulo(25, 1);

    if (rectangulo->equals(rectangulo2)) {
      cout<<"Los Rectangulos son iguales,"<<endl;
    }
    delete rectangulo2;
  }
  delete obj;

  return 0;
}
