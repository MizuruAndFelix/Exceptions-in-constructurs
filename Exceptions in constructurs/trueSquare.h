#pragma once
#include "square.h"

class square : public Quadrilateral
{
public:
	square(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner);
};