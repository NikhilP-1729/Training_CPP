#include "Circle.h"

extern const double PI = 3.14159;

Circle::Circle(double r, int x, int y) :Point(x, y) {
	setRadius(r);
}

void Circle::setRadius(double r) {
	radius = (r > 0) ? r : 0;

}
double Circle::getRadius()const {
	return radius;
}
double Circle::calculateArea()const {
	return(PI * radius * radius);
}
ostream& operator<<(ostream& out, const  Circle& c) {
	out << "Centre at" << static_cast<Point>(c) << "Radius is " << c.radius << ".Area is " << c.calculateArea();
	return out;
}
void Circle::print()const {
	Point::print();
	cout << "[" << "Radius is " << radius << "]\n";
}
void foo() {
	cout << "For gits\n";
}