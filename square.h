#pragma once
#include "pointer.h"
#include "rectangle.h"
#include <string>
using std::string;

class Square : public Rectangle{
  public:
	Square(double, Pointer);
	virtual ~Square();
	string toString()const;
};
