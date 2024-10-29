/*
C9_Lab7.1 Assignment
By Wakeland Branz
*/

/*

Lab 7.1 -- fill in the required code only and test, Do Exercise 1 and 2
Zip the project and upload to Blackboard or upload the cpp files



*/

// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Wakeland Branz

#include <iostream>
#include <stdio.h>
using namespace std;

typedef int GradeType[100];		// declares a new data type:
// an integer array of 100 elements

float findAverage(const GradeType, int);	// finds average of all grades 
int   findHighest(const GradeType, int);	// finds highest of all grades 
int   findLowest(const GradeType, int);		// finds lowest of all grades

int main()
{
	bool debug = false;

	GradeType grades;	// the array holding the grades. 
	int numberOfGrades;	// the number of grades read.
	int pos;			// index to the array.
	float avgOfGrades;	// contains the average of the grades. 
	int highestGrade;	// contains the highest grade.
	int lowestGrade;	// contains the lowest grade.

	int input;

	// Read in the values into the array 
	pos = 0;
	cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
	cin >> input;

	numberOfGrades = 0;
	while (input != -99 && pos < 100)
	{
		if (input >= 1 && input <= 100) {
			grades[pos] = input;
			pos++;
		}
		else {
			cout << "Input out of bounds. Please input a grade from 1 to 100 (or -99 to stop)" << endl;
		}

		cin >> input;
	}

	// This is unnecessary
	numberOfGrades = pos;	// Number of valid grades entered

	if (numberOfGrades == 0) {
		cout << "No valid grades were entered." << endl;
		return 0;
	}

	// Debug output
	if (debug) {
		printf("Debug grades: ");
		for (int i = 0; i < pos; i++) {
			printf("%i | ", grades[i]);
		}
	}

	// call to the function to find average
	avgOfGrades = findAverage(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;

	// Fill in the call to the function that calculates highest grade
	highestGrade = findHighest(grades, numberOfGrades);
	cout << endl << "The highest grade is " << highestGrade << endl;

	// Fill in the call to the function that calculates lowest grade
	// Fill in code to write the lowest to the screen
	lowestGrade = findLowest(grades, numberOfGrades);
	cout << endl << "The lowest grade is " << lowestGrade << endl;

	return 0;
}

//********************************************************************************
// findAverage
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the average of the numbers in the array
// data in:	      array of floating point numbers
// data returned: average of the numbers in the array
//
//********************************************************************************

float findAverage(const GradeType	array, int size)
{
	float sum = 0;			// holds the sum of all the numbers

	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];

	return (sum / size);	// returns the average
}

//****************************************************************************
// findHighest
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the highest value of the numbers in 
//                the array
// data in:	      array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************

int	findHighest(const GradeType array, int size)
{
	// Initialize with first element
	int highest = array[0];

	for (int i = 0; i < size; i++) {
		if (array[i] > highest) 
			highest = array[i];
	}

	return highest;
}

//****************************************************************************
// findLowest
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the lowest value of the numbers in 
//                the array
// data in:	      array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************

int	findLowest(const GradeType array, int size)
{
	// Initialize with first element
	int lowest = array[0];

	for (int i = 0; i < size; i++) {
		if (array[i] < lowest)
			lowest = array[i];
	}

	return lowest;
}

