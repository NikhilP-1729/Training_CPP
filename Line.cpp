#include "Line.h"
#include "Shape.h"
#include "point.h"


Line::Line(int x,int y) {
	start = new Point(x,y);
	end = new Point(x + 4, y);
}
Line::~Line() {
	delete start;
	delete end;
}