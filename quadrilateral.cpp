#include "figure2d.h"
#include "rectangle.h"
#include "pointer.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <typeinfo>
using std::cout;
using std::endl;
using std::type_info;
using std::vector;
using std::string;
using std::stringstream;

Quadrilateral::Quadrilateral(Pointer p1, Pointer p2, Pointer p3, Pointer p4):p1(p1), p2(p2), p3(p3), p4(p4){
	a = p1.distanceTo(p2);
	b = p2.distanceTo(p3);
	c = p3.distanceTo(p4);
	d = p4.distanceTo(p1);
}
Quadrilateral::Quadrilateral(){}
Quadrilateral::Quadrilateral(Quadrilateral& newQuadrilateral){
	p1 = newQuadrilateral.p1;
	p2 = newQuadrilateral.p2;
	p3 = newQuadrilateral.p3;
	p4 = newQuadrilateral.p4;
	a = p1.distanceTo(p2);
	b = p2.distanceTo(p3);
	c = p3.distanceTo(p4);
	d = p4.distanceTo(p1);
}
Quadrilateral::~Quadrilateral(){
	cout << "Dtor Quadrilateral @ " << this << endl;
}
string Quadrilateral::toString()const{
	stringstream ss;
	ss << "Quadrilateral";
	return ss.str();
}
double Quadrilateral::area()const{
	return -1;
}
double Quadrilateral::tall()const{
	return -1;
}
double Quadrilateral::perimeter()const{
	return a + b + c + d;
}
Pointer Quadrilateral::getP1(){
	return this->p1;
}

// }

bool Quadrilateral::intercepta(Quadrilateral& otherFigure){
	this->intercepta(otherFigure, false);
}
bool Quadrilateral::intercepta(Quadrilateral& otherFigure, bool reverse){
	vector <Pointer> otherPointers;
	cout << "type_info == " << (typeid(otherFigure) == typeid(*(this))) << endl; 
	otherPointers.push_back(otherFigure.p1);
	otherPointers.push_back(otherFigure.p2);
	otherPointers.push_back(otherFigure.p3);
	otherPointers.push_back(otherFigure.p4);
	for (int i = 0; i < otherPointers.size(); i++){
		if (this->p1.getX() <= otherPointers[i].getX() && this->p1.getY() >= otherPointers[i].getY() && 
			this->p3.getX() >= otherPointers[i].getX() && this->p3.getY() <= otherPointers[i].getY()){
				return true;
			}
	}
	if (reverse){
		return false;
	}
	return otherFigure.intercepta(*this, true);
}