#include "EquilateralTriangle.h"
#include "Exception.h"
//��������������. 
//��� ����    =
//��� ������� =
EquilateralTriangle::EquilateralTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner)
	: Triangle(aside, bside, cside, acorner, bcorner, ccorner)
{
	Triangle::Name = "�������������� �����������";

	if ((aside!= bside && bside != cside) && (acorner != bcorner && bcorner != ccorner))
	{
		throw Exception("������� � ���� �� �����");
	}

	if (aside != bside && bside != cside)
	{
		throw Exception("������� �� �����");
	}

	if (acorner != bcorner && bcorner != ccorner)
	{
		throw Exception("���� �� �����");
	}

};