#pragma once

#include "Polygon.h"

CPolygon* createTri();

class CTriangle : public CPolygon 
{
public:
	CTriangle();
	virtual ~CTriangle();
	virtual void set_values(int a, int b);
	virtual int area();
	virtual void abc() {};
};

