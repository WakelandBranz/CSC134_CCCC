/*
C9_IE3 Assignment
By Wakeland Branz
*/

/*

8. Mode Function

In statistics, the mode of a set of values is the value that occurs most often or with the greatest frequency. Write a function that accepts
as arguments the following:

A) An array of integers

B) An integer that indicates the number of elements in the array

The function should determine the mode of the array. That is, it should determine which value in the array occurs most often. The mode is the
value the function should return. If the array has no mode (none of the values occur more than once), the function should return −1.
(Assume the array will always contain nonnegative values.)

Demonstrate your pointer prowess by using pointer notation instead of array notation in this function.

*/

#include <stdio.h>

int calculateMode(int* array, const int SIZE);

int modeFunctionMain() {
	// Test cases
	int test1[] = { 1, 2, 3, 2, 2, 4, 5 };  // Mode should be 2
	int test2[] = { 1, 2, 3, 4, 5 };        // No mode (-1)
	int test3[] = { 4, 4, 4, 4 };           // Mode should be 4
	int test4[] = { 1, 1, 2, 2, 3, 3 };     // No mode (-1) as all appear twice

	printf("Test 1 Mode: %i\n", calculateMode(test1, 7));
	printf("Test 2 Mode: %i\n", calculateMode(test2, 5));
	printf("Test 3 Mode: %i\n", calculateMode(test3, 4));
	printf("Test 4 Mode: %i\n", calculateMode(test4, 6));

	return 0;
}

int calculateMode(int* array, const int SIZE) {
	if (SIZE <= 0) return -1;

	int mode = -1;
	int maxFrequency = 1;
	bool hasDuplicates = false;
	bool hasUniqueMode = false;

	for (int i = 0; i < SIZE; i++) {
		int currFrequency = 1;

		// Check each other element for number occurences
		for (int j = i + 1; j < SIZE; j++) {
			if (*(array + i) == *(array + j)) {
				currFrequency++;
				hasDuplicates = true;
			}
		}

		// Assign new highest maximum frequency and assign necessary values
		if (currFrequency > maxFrequency) {
			maxFrequency = currFrequency;
			mode = *(array + i);
			hasUniqueMode = true;
		}
		// Otherwise there are multiple modes with the same frequency, thus this function should return -1.
		else if (currFrequency == maxFrequency && maxFrequency > 1) {
			hasUniqueMode = false;
		}

	}

	// Ternary operator, just an if-else statement.
	return (hasDuplicates && hasUniqueMode) ? mode : -1;
}