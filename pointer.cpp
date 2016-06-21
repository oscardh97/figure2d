#include <string>
#include "pointer.h"
#include <sstream>
#include <cmath>
using namespace std;

Pointer::Pointer(double x, double y):x(x),y(y){}
Pointer::Pointer(){}
Pointer::Pointer(const Pointer& point){
	x = point.x;
	y = point.y;
}
string Pointer::toString()const{
	stringstream ss;
	ss << "(" << this->x << "," << this-> y << ")";
	return ss.str();
}
double Pointer::distanceTo(const Pointer& otherPointer){
	double deltaX = this->x > otherPointer.x ? this->x - otherPointer.x : otherPointer.x - this->x;
	double deltaY = this->y > otherPointer.y ? this->y - otherPointer.y : otherPointer.y - this->y;
	return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}
const bool Pointer::operator==(const Pointer& rPointer){
	return this->x == rPointer.x && this->y == rPointer.y;
}
const bool Pointer::operator!=(const Pointer& rPointer){
	return !(*this == rPointer);
}
int Pointer::getX(){
	return x;
}
int Pointer::getY(){
	return y;
}
