#pragma once

#include "ellipse.h"
#include "pointer.h"
#include <string>
using std::string;

class Circle : public Ellipse{
  public:
	Circle(double, Pointer);
	virtual ~Circle();
	string toString()const;
	// double area()const;
	// double perimeter()const;
};
