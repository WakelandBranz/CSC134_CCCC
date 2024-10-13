/*
Chapter 6 Lab 6.1 Assignment
By Wakeland Branz
*/

// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb that is called by the main function

#include <iostream>
using namespace std;

void writeProverb(); // This is the prototype for the writeProverb function 

void writeProverb() {
	std::cout << "Now is the time for all good men to come to the aid of their party";
}

int main61()
{
	// Fill in the code to call the writeProverb function
	writeProverb();

	return 0;
}

//*********************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb
//	data in:  none
//	data out: no actual parameter altered
//
//********************************************************************

// Fill in the function heading and the body of the function that will print
// to the screen the proverb listed in the comments at the beginning of the
// program