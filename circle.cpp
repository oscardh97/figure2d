#include "circle.h"
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

Circle::Circle(double r1, Pointer center):Ellipse(r1,r1, center){}
Circle::~Circle(){
	cout << "Dtor Circle @ " << this << endl;
}
string Circle::toString()const{
	stringstream ss;
	ss << "Circle";
	return ss.str();
}
// double Circle::area()const{
// 	return 3.14159265359 * r1 * r2;
// }
// double Circle::perimeter()const{
// 	double h = pow(r1 - r2, 2) / pow(r1 + r2, 2);
// 	return 3.14159265359 * (r1 + r2) * (1 + ( 3*h / (10 + sqrt(4-3*h))));
// }
