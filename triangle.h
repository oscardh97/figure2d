#pragma once
#include "figure2d.h"
#include "pointer.h"
#include <string>
using std::string;

class Triangle : public Figure2D{
	Pointer p1, p2, p3;
	double a, b, c;
  public:
	Triangle(Pointer, Pointer, Pointer);
	virtual ~Triangle();
	double area()const;
	double perimeter()const;
	string toString()const;
};
