#pragma once
#include "Figure.h"
#include <iostream>

class Triangle : public Figure
{ // ==========================================база 3угольника
protected:
    int aside = 0;
    int bside = 0;
    int cside = 0;
    int acorner = 0;
    int bcorner = 0;
    int ccorner = 0;
public:
    Triangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_);
    void printSides()override;
    void printCorners()override;
    void check()override;
};