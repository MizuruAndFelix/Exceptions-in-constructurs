#include "rightTriangle.h"
#include "Exception.h"
#include "Triangle.h"
//������������� 90 
rightTriangle::rightTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner)
	: Triangle(aside, bside, cside, acorner, bcorner, ccorner)
{
	Triangle::Name = "������������� �����������";

	if (acorner != 90)
	{
		throw Exception("���� � �� ����� 90 ��������");
	}

	if (bcorner != 90)
	{
		throw Exception("���� B �� ����� 90 ��������");
	}

	if (ccorner != 90)
	{
		throw Exception("���� C �� ����� 90 ��������");
	}
}