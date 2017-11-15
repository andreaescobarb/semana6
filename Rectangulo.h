#ifndef Rectangulo_H
#define Rectangulo_H

#include "figura.h"

class Rectangulo: public Figura{
	private:
		double base;
		double altura;
	public:
		Rectangulo(double, double);
		virtual double getArea();
		virtual double getPerimetro();
		virtual bool equals(object*);
		virtual string toString();

};
#endif
