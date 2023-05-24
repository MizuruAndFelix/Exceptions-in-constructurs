#include "parallelogram.h"
#include "Exception.h"
#include "square.h"
// b=d c=a
// 
parallelogram::parallelogram(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner)
	: Quadrilateral(aside, bside, cside, dside, acorner, bcorner, ccorner, dcorner)
{
	Quadrilateral::Name = "��������������";

	if ((bcorner != dcorner || ccorner != acorner) && (bside != dside || cside != aside))
	{
		throw Exception("���� � ������� �� �����");
	}

	if (bcorner != dcorner || ccorner != acorner)
	{
		throw Exception("���� �� �����");
	}

	if (bside != dside || cside != aside)
	{
		throw Exception("������� �� �����");
	}
};