#pragma once
#include "figure2d.h"
#include "quadrilateral.h"
#include "pointer.h"
#include <string>
using std::string;

class Rectangle:public Quadrilateral{
	double height, base;
	public:
		Rectangle(Pointer,double,double);
		Rectangle(Pointer, Pointer);
		Rectangle();
		virtual ~Rectangle();
		string toString()const;
		double area(int)const;
		double area()const;
		double perimeter()const;
		double tall()const;
};
