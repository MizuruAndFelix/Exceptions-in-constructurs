#include "Exception.h"
#include "isoscelesTriangle.h"
//�������������� 2 ���� � 2 ������� �����
isoscelesTriangle::isoscelesTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner)
	: Triangle(aside, bside, cside, acorner, bcorner, ccorner)
{
	Triangle::Name = "�������������� �����������";

	if ((aside != bside && aside != bside) && (acorner != bcorner && acorner != ccorner))
	{
		throw Exception("���� � ������� �� �����");
	}

	if (aside != bside && aside != bside)
	{
		throw Exception("������� �� �����");
	}

	if (acorner != bcorner && acorner != ccorner)
	{
		throw Exception("���� �� �����");
	}
};