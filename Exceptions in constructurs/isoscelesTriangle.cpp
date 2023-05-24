#include "Exception.h"
#include "isoscelesTriangle.h"
//Равнобедренный 2 угла и 2 стороны равны
isoscelesTriangle::isoscelesTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner)
	: Triangle(aside, bside, cside, acorner, bcorner, ccorner)
{
	Triangle::Name = "Равнобедренный треугольник";

	if ((aside != bside && aside != bside) && (acorner != bcorner && acorner != ccorner))
	{
		throw Exception("Углы и стороны не равны");
	}

	if (aside != bside && aside != bside)
	{
		throw Exception("Стороны не равны");
	}

	if (acorner != bcorner && acorner != ccorner)
	{
		throw Exception("Углы не равны");
	}
};