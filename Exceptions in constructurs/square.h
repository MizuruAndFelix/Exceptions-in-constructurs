#pragma once
#include "Figure.h"
#include <iostream>

class Quadrilateral : public Figure
{ // ==========================================база 4угольника
private:
    int aside = 0;
    int bside = 0;
    int cside = 0;
    int dside = 0;
    int acorner = 0;
    int bcorner = 0;
    int ccorner = 0;
    int dcorner = 0;
public:
    Quadrilateral(int aside_, int bside_, int cside_, int dside_, int acorner_, int bcorner_, int ccorner_, int dcorner_);
    void printSides()override;
    void printCorners()override;
    void check()override;
};