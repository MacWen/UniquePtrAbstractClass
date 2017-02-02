#include "stdafx.h"
#include "Triangle.h"

std::unique_ptr<CTriangle> upPolygon;

CTriangle::CTriangle()
{
	std::cout << "triangle" << std::endl;
}


CTriangle::~CTriangle()
{
}

int CTriangle::area()
{
	return width * height / 2;
}

void CTriangle::set_values(int a, int b) 
{
	width = a;
	height = b;
}

CPolygon* createTri()
{
	upPolygon.reset(new CTriangle());
	return upPolygon.get();
}