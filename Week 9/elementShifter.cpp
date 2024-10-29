/*
C9_A1 Assignment
By Wakeland Branz
*/

/*

Element Shifter
Write a function that accepts an int array and the array's size as arguments. The function should create a new array that is one element larger 
than the argument array. The first element of the new array should be set to 0. Element 0 of the argument array should be copied to element 1 of
the new array, elements 1 of the argument array should be copied to element 2 of the new array, and so forth. The function should return a pointer
to the new array.

*/

#include <stdio.h>
int* elementShifter(int* array, const int SIZE);

int elementShifterMain() {
	const int SIZE = 5;
	int exampleArray[SIZE] = { 1, 2, 3, 4, 5 };
	int* newArray = elementShifter(exampleArray, SIZE);
	
	printf("Example array: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%i", exampleArray[i]);
	}
	printf("\n");

	printf("Shifted array: ");
	for (int i = 0; i < SIZE + 1; i++) {
		printf("%i", newArray[i]);
	}
	printf("\n");
	

	return 0;
}


int* elementShifter(int* array, const int SIZE) {
	// Create new array with 1 greater size and assign position 0 to equal 0
	int* newArray = nullptr;
	newArray = new int[SIZE + 1];
	newArray[0] = 0;

	for (int i = 1; i < SIZE + 1; i++) {
		newArray[i] = array[i - 1];
	}
	
	return newArray;
}