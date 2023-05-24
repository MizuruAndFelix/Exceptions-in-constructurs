#pragma once
#include "Triangle.h"
class EquilateralTriangle :
    public Triangle
{
public:
    EquilateralTriangle(int aside, int bside, int cside, int acorner, int bcorner, int ccorner);
};