#include "quadrilateral.h"
#include "rombo.h"
#include "pointer.h"
#include <string>
#include <iostream>
using namespace std;

Rombo::Rombo(Pointer centro, double ancho, double altura){
	this->p1 = Pointer(centro.getX(), centro.getY() + altura / 2);
	this->p2 = Pointer(centro.getX() + ancho / 2, centro.getX());
	this->p3 = Pointer(centro.getX(), centro.getY() - altura / 2);
	this->p4 = Pointer(centro.getX() - ancho / 2, centro.getX());
	cout << "1-->" << p1.toString() << endl;
	cout << "2-->" << p2.toString() << endl;
	cout << "3-->" << p3.toString() << endl;
	cout << "4-->" << p4.toString() << endl;
}
// virtual ~Rombo();
// string toString()const;
