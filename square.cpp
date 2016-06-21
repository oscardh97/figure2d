#include "rectangle.h"
#include "square.h"
#include "pointer.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Square::Square(double lado, Pointer p1):Rectangle(p1, lado, lado){
	// Pointer p2, p3, p4;
	// p2 = Pointer(p1.getX() + lado, p1.getY());
	// p3 = Pointer(p2.getX(), p2.getY() + lado);
	// p4 = Pointer(p1.getX(), p1.getY() + lado);
	// Rectangle:Rectangle(p1, p2, p3, p4);
}
Square::~Square(){
	cout << "Dtor Square @ " << this << endl;
}
string Square::toString()const{
	stringstream ss;
	ss << "Square";
	return ss.str();
}
