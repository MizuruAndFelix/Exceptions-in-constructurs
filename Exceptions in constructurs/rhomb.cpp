#include "rhomb.h"
#include "Exception.h"
#include "square.h"
// b=d c=a
rhomb::rhomb(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner)
	: Quadrilateral(aside, bside, cside, dside, acorner, bcorner, ccorner, dcorner)
{
	Quadrilateral::Name = "Прямоугольник";

	if ((acorner != bcorner && bcorner != ccorner && ccorner != dcorner) && (aside != bside && bside != cside && cside != dside))
	{
		throw Exception("Углы и стороны не равны");
	}

	if (acorner != bcorner && acorner != ccorner && acorner != dcorner)
	{
		throw Exception("Углы не равны");
	}

	if (aside != bside && bside != cside && cside != dside)
	{
		throw Exception("Стороны не равны");
	}
};