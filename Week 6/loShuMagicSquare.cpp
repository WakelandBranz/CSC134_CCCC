/*
C7_IE4 Assignment
By Wakeland Branz
*/

/*

The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in Figure 7-19 . The Lo Shu Magic Square has the following properties:
• The grid contains the numbers 1 through 9 exactly. 
• The sum of each row, each column, and each diagonal all add up to the same number. 
This is shown in Figure 7-20 . In a program you can simulate a magic square using a two-dimensional array. 
Write a function that accepts a two-dimensional array as an argument, and determines whether the array is a Lo Shu Magic Square. 
Test the function in a program.

*/

#include <iostream>
#include <string>
#include <iomanip>
const int ROWS = 3;
const int COLS = 3;
bool rowsPass(int square[][COLS], int sum);
bool colsPass(int square[][COLS], int sum);
bool diagsPass(int square[][COLS], int sum);
using namespace std;

int magicmain() {
	int square[ROWS][COLS] = {	{4,9,2},
								{3,5,7},
								{8,1,6}	};

	int sum = square[0][0] + square[1][0] + square[2][0];
	if (rowsPass(square, sum) && colsPass(square, sum) && diagsPass(square, sum)) {
		cout << "This is a magic square.\n";
	}
	else {
		cout << "This is a NOT magic square\n";
	}
	
	return 0;
}
bool rowsPass(int square[][COLS], int sum) {
	for (int row = 0; row < COLS; row++) {
		int rowSum = square[row][0] + square[row][1] + square[row][2];
		if (rowSum != sum) return false;
	}
	return true;
}
bool colsPass(int square[][COLS], int sum) {
	for (int col = 0; col < COLS; col++) {
		int colSum = square[0][col] + square[1][col] + square[2][col];
		if (colSum != sum) return false;
	}
	return true;
}
bool diagsPass(int square[][COLS], int sum) {
	int diag1 = square[0][0] + square[1][1] + square[2][2];
	int diag2 = square[0][2] + square[1][1] + square[2][0];
	return (diag1 == sum) && (diag2 == sum);
}