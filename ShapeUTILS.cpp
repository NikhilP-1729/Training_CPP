
#include"Shape.h"
#include <iostream>
using namespace std;
void virtualViaPtr(const Shape* baseptr) {
	baseptr->drawShape();
	baseptr->print();
	cout << "Area is " << baseptr->calculateArea() << " and Volume is  " << baseptr->calculateVolume() << "\n";
}
void virtualViaRef(const Shape& baseClassRef) {
	baseClassRef.drawShape();
	baseClassRef.print();
	cout << "Area is " << baseClassRef.calculateArea() << " and Volume is  " << baseClassRef.calculateVolume() << "\n";
}