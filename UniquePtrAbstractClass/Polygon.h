#pragma once

#include <iostream>
#include <memory>

class CPolygon 
{
protected:
	int width, height;
public:
	virtual ~CPolygon() {}
	virtual int area() = 0;
	virtual void set_values(int a, int b) = 0;
	virtual void abc() = 0;
};