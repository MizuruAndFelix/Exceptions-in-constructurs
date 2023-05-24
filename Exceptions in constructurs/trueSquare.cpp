#include "square.h"
#include "Exception.h"
#include "trueSquare.h"

square::square(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner)
	: Quadrilateral(aside, bside, cside, dside, acorner, bcorner, ccorner, dcorner)
{
	Quadrilateral::Name = "�������";

	if ((acorner != bcorner && bcorner != ccorner && ccorner != dcorner) && (aside != bside && aside != cside && aside != dside))
	{
		throw Exception("���� � ������� �� �����");
	}

	if (acorner != bcorner && acorner != acorner && acorner != dcorner)
	{
		throw Exception("���� �� �����");
	}

	if (aside != bside && aside != cside && aside != dside)
	{
		throw Exception("������� �� �����");
	}
};