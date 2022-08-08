#pragma once
#include "point.h"
#include "Shape.h"


class Circle :public Point {
	friend ostream& operator<<(ostream&, const Circle&);

public:
	Circle(double = 0, int = 0, int = 0);
	void setRadius(double r );
	double getRadius() const;
	virtual void drawShape()const { cout << "Circle: "; }
	virtual void print() const;
	double calculateArea() const;
protected:
	double radius;

};