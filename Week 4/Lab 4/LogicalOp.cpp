// This program illustrates the use of logical operators

// Wakeland Branz

#include <iostream> 
using namespace std;

int logicalOp()
{
	char year; float gpa;

	cout << "What year student are you ?\n";
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)\n\n";
	cin >> year;

	cout << "Now enter your GPA\n";
	cin >> gpa;

	if (gpa >= 2.0 && year == '4')
		cout << "It is time to graduate soon\n";

	else if (year != '4' || gpa < 2.0)
		cout << "You need more schooling\n";

	return 0;
}

/*

Exercise 1: You could rewrite "gpa >= 2.0" in the first if statement using the NOT operator as such: !(gpa < 2.0).

*/