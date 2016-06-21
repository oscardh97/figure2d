#pragma once
#include <string>
using std::string;

class Pointer{
	double x, y;
	public:
		Pointer(double, double);
		Pointer();
		Pointer(const Pointer&);
		// virtual ~Pointer();
		string toString()const;
		double distanceTo(const Pointer&);
		const bool operator ==(const Pointer&);
		const bool operator !=(const Pointer&);
		int getX();
		int getY();
		// double perimeter()const;
};
