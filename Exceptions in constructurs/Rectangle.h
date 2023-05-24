#pragma once
#include "square.h"

class rectangle : public Quadrilateral
{
public:
	rectangle(int aside, int bside, int cside, int dside, int acorner, int bcorner, int ccorner, int dcorner);
};