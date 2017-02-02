// UniquePtrAbstractClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <memory>

int main()
{
	CPolygon* upPolygon;
	bool b = true;
	if(b)
		upPolygon = createRect();
	else
		upPolygon = createTri();
	
	upPolygon->set_values( 2, 3 );
	std::cout << upPolygon->area() << std::endl;

	if (b)
		upPolygon->abc();

	getchar();
	getchar();
    return 0;
}

