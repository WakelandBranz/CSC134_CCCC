/*
C9_IE0 Assignment
By Wakeland Branz
*/

/*

Array Allocator Write a function that dynamically allocates an array of integers. The function should accept an integer argument indicating 
the number of elements to allocate. The function should return a pointer to the array. Write a main function that demonstrates the Array 
Allocator function

*/

#include <stdio.h>
int* allocateArray(const int SIZE);


int arrayAllocatorMain() {
	const int SIZE = 5;
	int* array = allocateArray(10);

	printf("Printing and assignment values to array located at %p\n", array);

	for (int i = 0; i < SIZE; i++) {
		*(array + i) = i + 1;
		printf("%i\n", array[i]);
	}

	return 0;
}


int* allocateArray(const int SIZE) {
	return new int[SIZE];
}