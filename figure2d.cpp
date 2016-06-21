#include "figure2d.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Figure2D::Figure2D(){}
Figure2D::~Figure2D(){
	cout << "Dtor Figure2D @ " << this << endl;
}
string Figure2D::toString()const{
	stringstream ss;
	ss << "Figure2D @ " << this;
	return ss.str();
}
double Figure2D::area()const{
	return -1;
}
double Figure2D::perimeter()const{
	return -1;
}
