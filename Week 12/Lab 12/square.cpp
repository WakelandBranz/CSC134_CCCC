// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Wakeland Branz

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.

class Square {
private:
	float side;
public:
	Square() { side = 0; }
	~Square() {}

	void setSide(float length);
	float findArea();
	float findPerimeter();
};

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}

int asasdasdmain()
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square

	// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)

	// FILL IN THE CODE THAT CALLS SetSide.

	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.

	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.

	cout << "Please input the length of the side of the square\n";

	cin >> size;
	box.setSide(size);

	cout << "The area of the square is " << box.findArea() << "\n";
	cout << "The perimeter of the square is " << box.findPerimeter() << "\n";

	return 0;
}

