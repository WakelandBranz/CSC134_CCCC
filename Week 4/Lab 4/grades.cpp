// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Wakeland Branz
#include <iostream> 
using namespace std;

int grades()	{
	float average;	// holds the grade average 
	cout << "Input your average:\n";
	cin >> average;

	if (average >= 60)
		cout << "You Pass\n";
	else
		cout << "You Fail\n";

	return 0;
}

/*

Exercise 1: When 60 is input and an equal sign is not added to the first if statement, neither if statement condition is met and the program exits.

Exercise 2: Modify the program so that it uses an if/else statement rather than two if statements.

Complete!

*/

