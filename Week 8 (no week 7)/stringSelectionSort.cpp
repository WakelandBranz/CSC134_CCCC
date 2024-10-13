/*
C8_E1 Assignment
By Wakeland Branz
*/

/*

Modify the selectionSort function presented in this chapter so it sorts an array of strings instead of an array of ints. Test the function 
with a driver program. Use the selection sort code in the slides as  to complete this exercise.

*/

#include <iostream>
#include <iomanip>

void selectionSort(std::string array[], int size);
void swap(int& a, int& b);

int stringSelectionSortmain() {

    const int NUM_NAMES = 20;
    std::string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                           "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                           "Taylor, Terri", "Johnson, Jill",
                           "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                           "James, Jean", "Weaver, Jim", "Pore, Bob",
                           "Rutherford, Greg", "Javens, Renee",
                           "Harrison, Rose", "Setzer, Cathy",
                           "Pike, Gordon", "Holland, Beth" };

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < NUM_NAMES; i++) {
        std::cout << names[i] << std::endl;
    }

    selectionSort(names, NUM_NAMES);

    std::cout << "\nSorted array:" << std::endl;
    for (int i = 0; i < NUM_NAMES; i++) {
        std::cout << names[i] << std::endl;
    }

    return 0;
}

void selectionSort(std::string array[], int size)
{
	int minIndex;
	std::string minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		swap(array[minIndex], array[start]);
	}
}

//***************************************************
// The swap function swaps a and b in memory.       *
//***************************************************
void swap(std::string& a, std::string& b)
{
	std::string temp = a;
	a = b;
	b = temp;
}
