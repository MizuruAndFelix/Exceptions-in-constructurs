#include "square.h"
#include <iostream>
#include "Figure.h"
#include "Exception.h"
using namespace std;

Quadrilateral::Quadrilateral(int aside_, int bside_, int cside_, int dside_, int acorner_, int bcorner_, int ccorner_, int dcorner_)
{
	Name = "Четырехугольник";
	aside = aside_;
	bside = bside_;
	cside = cside_;
	dside = dside_;
	acorner = acorner_;
	bcorner = bcorner_;
	ccorner = ccorner_;
	dcorner = dcorner_;

	if ((acorner + bcorner + ccorner + dcorner) != 180)
	{
		throw Exception("Сумма углов не равна 180");
	}

}

void Quadrilateral::printSides()
{
    cout << "Стороны: " << " a = " << aside << " b = " << bside << " c = " << cside << " d = " << dside << endl;
}
void Quadrilateral::printCorners()
{
    cout << "Углы: " << " A = " << acorner << " B = " << bcorner << " C = " << ccorner << " D = " << dcorner << endl;
}
void Quadrilateral::check()
{
    if (aside == bside && aside == cside && aside == dside && acorner == bcorner && acorner == ccorner && acorner == dcorner)
    {
        cout << "Правильная\n";
    }
    else
    {
        cout << "Неправильная\n";
    }
}
