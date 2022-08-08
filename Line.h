#pragma once

#include "Point.h"
class Line
{
public:
	Line(int,int);
	float calculateLength() const;
	~Line();

private:
	Point* start;
	Point* end;

};


