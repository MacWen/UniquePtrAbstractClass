#include "stdafx.h"
#include "Rectangle.h"

std::unique_ptr<CRectangle> upPolygon;

CRectangle::CRectangle()
	: CTest()
{
	std::cout << "rectange" << std::endl;
}


CRectangle::~CRectangle()
{
}

int CRectangle::area()
{
	return width * height;
}

void CRectangle::abc()
{
	std::cout << "only rect" << std::endl;
}

void CRectangle::set_values(int a, int b) 
{
	width = a;
	height = b;
}

CPolygon* createRect()
{
	upPolygon.reset(new CRectangle());
	return upPolygon.get();
}