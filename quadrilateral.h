#pragma once
#include "figure2d.h"
#include "pointer.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Quadrilateral:public Figure2D{
	double a, b, c, d;
	protected:
		Pointer p1, p2, p3, p4;
  	public:
		Quadrilateral(Pointer, Pointer, Pointer, Pointer);
		// Quadrilateral();
		Quadrilateral();
		Quadrilateral(Quadrilateral&);
		virtual ~Quadrilateral();
		virtual string toString()const;
		virtual double area()const;
		virtual double perimeter()const;
		virtual double tall()const;
		Pointer getP1();
		// vector<Pointer>& getPointers();
		bool intercepta(Quadrilateral&, bool);
		bool intercepta(Quadrilateral&);
};
