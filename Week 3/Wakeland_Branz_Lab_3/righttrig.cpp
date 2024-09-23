// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Wakeland Branz

#include <iostream>
#include <cmath>	// needed for math functions like sqrt()
using namespace std;

int righttrig()
{
	float a, b;	// the smaller two sides of the triangle 
	float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the first side\n";
	cin >> a;
	cout << "Please input the value of the second side\n";
	cin >> b;

	// Fill in the assignment statement that determines the hypotenuse
	hyp = sqrt(a*a + b*b);

	cout << "The sides of the right triangle are " << a << " and " << b << "\n";

	cout << "The hypotenuse is " << hyp << "\n";

	return 0;
}