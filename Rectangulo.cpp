#include "Rectangulo.h"

Rectangulo::Rectangulo(double pBase, double pAltura){
	base = pBase;
	altura=pAltura;
}

double Rectangulo::getArea(){
	return base*altura;
}

double Rectangulo::getPerimetro(){
	return base*2+altura*2;
}
