#pragma once
#pragma once
#include <string>

class Figure
{
protected:
	std::string Name = "Фигура";
	int Sides = 0;
public:
	std::string getNameFigure();
	int getSides();
	virtual void printSides();
	virtual void printCorners();
	virtual void check();
};