#pragma once

#include <string>
using std::string;

class Figure2D{
  public:
	Figure2D();
	virtual ~Figure2D();
	virtual string toString()const;
	virtual double area()const;
	virtual double perimeter()const;
	// virtual bool intercepta(const Figure2D&)const;
};
