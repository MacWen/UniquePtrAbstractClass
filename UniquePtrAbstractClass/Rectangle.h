#pragma once

#include "Polygon.h"
#include "Test.h"

CPolygon* createRect();

class CRectangle : public CPolygon, public CTest
{
public:
	CRectangle();
	virtual ~CRectangle();
	virtual void set_values(int a, int b);
	virtual int area();

	void abc();
};

