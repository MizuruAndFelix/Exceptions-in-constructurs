#include "Triangle.h"
#include <iostream>
#include "Figure.h"
#include "Exception.h"
using namespace std;
Triangle::Triangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_)
{
	Name = "Треугольник";
	aside = aside_;
	bside = bside_;
	cside = cside_;
	acorner = acorner_;
	bcorner = bcorner_;
	ccorner = ccorner_;

	if ((acorner + bcorner + ccorner) != 180)
	{
		throw Exception("Сумма углов не равна 180");
	}

}

void Triangle::printSides()
{
    cout << "Стороны: " << " a = " << aside << " b = " << bside << " c = " << cside << endl;
}
void Triangle::printCorners()
{
    cout << "Углы: " << " A = " << acorner << " B = " << bcorner << " C = " << ccorner;
}
void Triangle::check()
{
    if (aside == bside && aside == cside && acorner == bcorner && acorner == ccorner)
    {
        cout << "Правильная фигура\n";
    }
    else
    {
        cout << "Неправильная фигура\n";
    }
}

