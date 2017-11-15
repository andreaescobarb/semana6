#ifndef Figura_H
#define Figura_H
#include "object.h"

class Figura: public object{
	public:
		virtual double getArea();
		virtual double getPerimetro()=0;

		//heredados de object
		virtual bool equals(object*)=0;
		virtual string toString()=0;
};

#endif
