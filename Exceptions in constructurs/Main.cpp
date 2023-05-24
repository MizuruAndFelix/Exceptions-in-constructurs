#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <stdexcept>
#include "Figure.h"
#include "Triangle.h"
#include "EquilateralTriangle.h"
#include "Exception"
#include "isoscelesTriangle.h"
#include "rightTriangle.h"
#include "Rectangle.h"
#include "square.h"
#include "trueSquare.h"
#include "parallelogram.h"
#include "rhomb.h"


using namespace std;

void printFigure(Figure& f)
{
	cout << f.getNameFigure() << ": " << endl;
	f.check();
	f.printSides();
	f.printCorners();

	cout << endl;
}

int main()
{
	setlocale(LC_ALL, ".UTF8");
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	SetConsoleCP(1251); //перевод на русский
	SetConsoleOutputCP(1251);

	try //обычный треугольник
	{
		Triangle Triangle(10, 20, 30, 55, 55, 70);
		printFigure(Triangle);
		cout << "создан." << endl << endl;
	}
	catch (const std::exception& Triangle)
	{
		std::cerr << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Triangle.what() << std::endl;
	}  //обычный треугольник

	try //равносторонний треугольник
	{
		EquilateralTriangle equilateralTriangle(11, 10, 10, 60, 60, 60);
		printFigure(equilateralTriangle);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& equilateralTriangle)
	{
		std::cerr << std::endl;
		std::cerr << "Равносторонний треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << equilateralTriangle.what() << std::endl;
	}  //равносторонний треугольник

	try
	{
		rightTriangle rightTriangle(10, 20, 30, 40, 50, 10);
		printFigure(rightTriangle);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& rightTriangle)
	{
		std::cerr << std::endl;
		std::cerr << "прямоугольный треугольник не был создан. " << std::endl << "причина: ";
		std::cerr << rightTriangle.what() << std::endl;
	}

	try
	{
		isoscelesTriangle isoscelesTriangle(10, 10, 10, 50, 80, 50);
		printFigure(isoscelesTriangle);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& isoscelesTriangle)
	{
		std::cerr << std::endl;
		std::cerr << "равнобедренный треугольник не был создан. " << std::endl << "причина: ";
		std::cerr << isoscelesTriangle.what() << std::endl;
	}

	try
	{
		Quadrilateral Quadrilateral(10, 20, 30, 40, 90, 90, 100, 80);
		printFigure(Quadrilateral);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& Quadrilateral)
	{
		std::cerr << std::endl;
		std::cerr << "четырехугольник не был создан. " << std::endl << "причина: ";
		std::cerr << Quadrilateral.what() << std::endl;
	}

	try
	{
		rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
		printFigure(rectangle);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& Rectangle)
	{
		std::cerr << std::endl;
		std::cerr << "прямоугольник не был создан. " << std::endl << "причина: ";
		std::cerr << Rectangle.what() << std::endl;
	}

	try
	{
		square square(10, 10, 10, 10, 90, 90, 90, 90);
		printFigure(square);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& square)
	{
		std::cerr << std::endl;
		std::cerr << "квадрат не был создан. " << std::endl << "причина: ";
		std::cerr << square.what() << std::endl;
	}

	try
	{
		parallelogram parallelogram(10, 10, 10, 10, 90, 90, 90, 90);
		printFigure(parallelogram);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& parallelogram)
	{
		std::cerr << std::endl;
		std::cerr << "параллелограмм не был создан. " << std::endl << "причина: ";
		std::cerr << parallelogram.what() << std::endl;
	}

	try
	{
		rhomb rhomb(10, 10, 10, 10, 80, 100, 80, 100);
		printFigure(rhomb);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& rhomb)
	{
		std::cerr << std::endl;
		std::cerr << "ромб не был создан. " << std::endl << "причина: ";
		std::cerr << rhomb.what() << std::endl;
	}
}
