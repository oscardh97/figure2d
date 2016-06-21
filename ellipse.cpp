#include "ellipse.h"
#include "figure2d.h"
#include "pointer.h"
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Ellipse::Ellipse(double r1, double r2, Pointer center):r1(r1), r2(r2), center(center){}
Ellipse::~Ellipse(){
	cout << "Dtor Ellipse @ " << this << endl;
}
string Ellipse::toString()const{
	stringstream ss;
	ss << "Ellipse";
	return ss.str();
}
double Ellipse::area()const{
	return 3.14159265359 * r1 * r2;
}
double Ellipse::perimeter()const{
	double h = pow(r1 - r2, 2) / pow(r1 + r2, 2);
	return 3.14159265359 * (r1 + r2) * (1 + ( 3*h / (10 + sqrt(4-3*h))));
}
