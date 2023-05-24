#include "Rectangle.h"
#include "Exception.h"
#include "square.h"
// b=d c=a
rectangle::rectangle(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner)
	: Quadrilateral(aside, bside, cside, dside, acorner, bcorner, ccorner, dcorner)
{
	Quadrilateral::Name = "�������������";

	if ((acorner != bcorner && bcorner != ccorner && ccorner != dcorner) && (bside != dside || cside != aside))
	{
		throw Exception("���� � ������� �� �����");
	}

	if (acorner != bcorner && acorner != acorner && acorner != dcorner)
	{
		throw Exception("���� �� �����");
	}

	if (bside != dside || cside != aside)
	{
		throw Exception("������� �� �����");
	}
};