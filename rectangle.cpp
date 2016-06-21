#include "figure2d.h"
#include "rectangle.h"
#include "quadrilateral.h"
#include "pointer.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Rectangle::Rectangle(Pointer p1, double base, double height){
	this->p1 = p1;
	this->p2 = Pointer(p1.getX() + base, p1.getY());
	this->p3 = Pointer(p2.getX(), p1.getY() - height);
	this->p4 = Pointer(p1.getX(), p1.getY() - height);
	this->base = base;
	this->height = height;
}
Rectangle::Rectangle(Pointer p1, Pointer p3){
	this->p1 = p1;
	this->p2 = Pointer(p3.getX(), p1.getY());
	cout << "########" << p2.toString() << endl;
	this->p3 = p3;
	this->p4 = Pointer(p1.getX(), p3.getY());
	cout << "$$$$$$$$" << p4.toString() << endl;
	this->base = p1.distanceTo(p2);
	this->height = p2.distanceTo(p3);
}
Rectangle::Rectangle(){}
Rectangle::~Rectangle(){
	cout << "Dtor Rectangle @ " << this << endl;
}
string Rectangle::toString()const{
	stringstream ss;
	ss << "Rectangle";
	return ss.str();
}
double Rectangle::area(int test)const{}
double Rectangle::area()const{
	return base * height;
	// return p1.distanceTo(p2) * p2.distanceTo(p3);
}
double Rectangle::tall()const{
	return height;
}
double Rectangle::perimeter()const{
	return 2 * base + 2 * height;
}
