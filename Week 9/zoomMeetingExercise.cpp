#include <stdio.h>

int* reverseArray(int array[], int SIZE);

int main() {
	const int SIZE = 5;
	int array[] = { 1, 2, 3, 4, 5 };

	int* reversedArray = reverseArray(array, SIZE);

	printf("%p", reversedArray);

	

	delete[] reversedArray;
	reversedArray = nullptr;

	return 0;
}

int* reverseArray(int array[], const int SIZE) {
	int* arrayPtr = nullptr;
	arrayPtr = new int[SIZE];
	
	int j;

	// Reverse the array
	for (int i = 0, j = SIZE - 1; i < SIZE && j >= 0; i++, j--) {
		arrayPtr[j] = array[i];
	}



	return arrayPtr;
}



