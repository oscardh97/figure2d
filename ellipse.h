#pragma once

#include "figure2d.h"
#include "pointer.h"
#include <string>
using std::string;

class Ellipse : public Figure2D{
	Pointer center;
	double r1, r2;
  public:
	Ellipse(double, double, Pointer);
	virtual ~Ellipse();
	string toString()const;
	double area()const;
	double perimeter()const;
};
