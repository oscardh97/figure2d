#pragma once
#include "pointer.h"
#include "quadrilateral.h"
#include <string>
using std::string;

class Rombo : public Quadrilateral{
  public:
	Rombo(Pointer, double, double);
	// virtual ~Rombo();
	// string toString()const;
};
