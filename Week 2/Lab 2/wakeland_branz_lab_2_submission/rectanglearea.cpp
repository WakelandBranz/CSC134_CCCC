// This program will output the perimeter and area
// of the rectangle with a given radius.

// Wakeland Branz

#include <iostream>
using namespace std;

const double PI = 3.14;
const double SIDE1 = 12.32;
const double SIDE2 = 13.54;

int rectanglearea() {
	double area = SIDE1 * SIDE2;
	double perimeter = SIDE1 * 2 + SIDE2 * 2;
	
	cout << "The area of the rectangle is " << area << "\n";
	cout << "The perimeter of the rectangle is " << perimeter << "\n";
	
	return 0;
}