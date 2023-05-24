#include "EquilateralTriangle.h"
#include "Exception.h"
//равносторонний. 
//все углы    =
//все стороны =
EquilateralTriangle::EquilateralTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner)
	: Triangle(aside, bside, cside, acorner, bcorner, ccorner)
{
	Triangle::Name = "Равносторонний треугольник";

	if ((aside!= bside && bside != cside) && (acorner != bcorner && bcorner != ccorner))
	{
		throw Exception("Стороны и углы не равны");
	}

	if (aside != bside && bside != cside)
	{
		throw Exception("Стороны не равны");
	}

	if (acorner != bcorner && bcorner != ccorner)
	{
		throw Exception("Углы не равны");
	}

};