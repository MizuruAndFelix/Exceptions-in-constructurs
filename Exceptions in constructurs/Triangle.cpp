#include "Triangle.h"
#include <iostream>
#include "Figure.h"
#include "Exception.h"
using namespace std;
Triangle::Triangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_)
{
	Name = "�����������";
	aside = aside_;
	bside = bside_;
	cside = cside_;
	acorner = acorner_;
	bcorner = bcorner_;
	ccorner = ccorner_;

	if ((acorner + bcorner + ccorner) != 180)
	{
		throw Exception("����� ����� �� ����� 180");
	}

}

void Triangle::printSides()
{
    cout << "�������: " << " a = " << aside << " b = " << bside << " c = " << cside << endl;
}
void Triangle::printCorners()
{
    cout << "����: " << " A = " << acorner << " B = " << bcorner << " C = " << ccorner;
}
void Triangle::check()
{
    if (aside == bside && aside == cside && acorner == bcorner && acorner == ccorner)
    {
        cout << "���������� ������\n";
    }
    else
    {
        cout << "������������ ������\n";
    }
}

