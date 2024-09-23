// This program will output the circumference and area
// of the circle with a given radius.

// Wakeland Branz

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int circlearea()
{
	float area;							// definition of area of circle 
	int circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * (RADIUS * RADIUS);		// computes area

	// Fill in the code for the cout statement that will output (with description)
	// the circumference
	cout << "The circumference of the circle is " << circumference << "\n";

	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle
	cout << "The area of the circle is " << area << "\n";

	return 0;
}

// Explanation: 
// When you change the circumference variable from a float to an int, the decimals are truncated
// and the number is not accurately displayed because an int is not capable of storing decimals.

/*
Original code: 
int main()
{
	float area;							// definition of area of circle 
	float circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * (RADIUS * RADIUS);		// computes area

	// Fill in the code for the cout statement that will output (with description)
	// the circumference
	cout << "The circumference of the circle is " << circumference << "\n";

	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle
	cout << "The area of the circle is " << area << "\n";

	return 0;
} 
*/