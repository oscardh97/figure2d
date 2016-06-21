#include "figure2d.h"
#include "triangle.h"
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Triangle::Triangle(Pointer p1, Pointer p2, Pointer p3):p1(p1), p2(p2), p3(p3){
	a = p1.distanceTo(p2);
	b = p2.distanceTo(p3);
	c = p3.distanceTo(p1);
}
Triangle::~Triangle(){
	cout << "Dtor Triangle @ " << this << endl;
}
double Triangle::area()const{
	double s = (a + b + c) / 2.0;
	return sqrt( s * (s - a) * (s - b) * (s - c));
}
double Triangle::perimeter()const{
	return a + b + c;
}
string Triangle::toString()const{
	stringstream ss;
	ss << "Triangle";
	return ss.str();
}
