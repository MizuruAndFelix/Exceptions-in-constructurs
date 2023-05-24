#include "rightTriangle.h"
#include "Exception.h"
#include "Triangle.h"
//прямоугольный 90 
rightTriangle::rightTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner)
	: Triangle(aside, bside, cside, acorner, bcorner, ccorner)
{
	Triangle::Name = "Прямоугольный треугольник";

	if (acorner != 90)
	{
		throw Exception("Угол А не равен 90 градусов");
	}

	if (bcorner != 90)
	{
		throw Exception("Угол B не равен 90 градусов");
	}

	if (ccorner != 90)
	{
		throw Exception("Угол C не равен 90 градусов");
	}
}