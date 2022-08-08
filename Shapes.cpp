// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "point.h"
#include "Circle.h"
#include"cylinder.h"
#include "Shape.h"
#include "Line.h"

int main()
{
	Point p1(2, 4);
	//p1.drawShape();
	//p1.print();
	//cout << "Area " << p1.calculateArea() << " Volume is " << p1.calculateVolume() << "\n\n";
	Circle c1(2, 4, 5);
	//c1.drawShape();
	//c1.print();
	//cout << "Area " << c1.calculateArea() << " Volume is " << c1.calculateVolume() << "\n\n";
	Cylinder cy1(10, 10, 5, 5);
	//cy1.drawShape();
	//cy1.print();
	//cout << "Area " << cy1.calculateArea() << " Volume is " << cy1.calculateVolume() << "\n";
	Shape* shape[3] = { &p1,&c1,&cy1 };
	for (int i = 0; i < 3; ++i)
		virtualViaPtr(shape[i]);
	cout << "\n\n\n\n";
	for (int i = 0; i < 3 ; ++i)
		virtualViaRef(*shape[i]);
}

/*Point* pointPtr = 0, p(30, 50);
	Circle *circlePtr=0,c(10, 10,20);
	cout <<"Point p "<<p<<"Circle c:"<<c<<endl;


	pointPtr = &c;
	cout << *pointPtr << endl;

	circlePtr = static_cast<Circle*>(pointPtr);
	cout << "\nCircle c (via circle ptr)" << *circlePtr<<"Area of c \n" << circlePtr->calculatearea() << endl;

	pointPtr = &p;

	circlePtr = static_cast<Circle*>(pointPtr);
	cout<< "\nCircle c (via circle ptr)" << *circlePtr << "Area of c \n" <<circlePtr->calculatearea() << endl;

	return 0;*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
