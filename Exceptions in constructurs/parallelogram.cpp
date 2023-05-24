#include "parallelogram.h"
#include "Exception.h"
#include "square.h"
// b=d c=a
// 
parallelogram::parallelogram(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner)
	: Quadrilateral(aside, bside, cside, dside, acorner, bcorner, ccorner, dcorner)
{
	Quadrilateral::Name = "Параллелограмм";

	if ((bcorner != dcorner || ccorner != acorner) && (bside != dside || cside != aside))
	{
		throw Exception("Углы и стороны не равны");
	}

	if (bcorner != dcorner || ccorner != acorner)
	{
		throw Exception("Углы не равны");
	}

	if (bside != dside || cside != aside)
	{
		throw Exception("Стороны не равны");
	}
};