/*
C10_Lab8.3 Assignment
By Wakeland Branz
*/

/*

Read the background text summarizing the material
and exercise 8.3 bubbble sort exercise 1 and exercise 2
Zip the project and upload to Blackboard or upload the cpp files

*/

// This program uses a bubble sort to arrange an array of integers in
// ascending order

#include <iostream>
using namespace std;

// function prototypes
void bubbleSortArray(int[], int);
void displayArray(int[], int);

const int SIZE = 8;

int lab8dot3Main()
{
    // Using the array from Exercise 2
    int values[SIZE] = { 23, 0, 45, -3, -78, 1, -1, 9 };

    cout << "The values before the bubble sort is performed are:" << endl;
    displayArray(values, SIZE);

    cout << "\nStarting bubble sort in descending order...\n" << endl;
    bubbleSortArray(values, SIZE);

    cout << "\nThe final sorted array in descending order is:" << endl;
    displayArray(values, SIZE);

    return 0;
}

//******************************************************************
//  displayArray
//
//  task:     to print the array
//  data in:  the array to be printed, the array size
//  data out: none
//
//******************************************************************
void displayArray(int array[], int elems)
{
    for (int count = 0; count < elems; count++)
        cout << array[count] << " ";
    cout << endl;
}

//******************************************************************
//  bubbleSortArray
//
//  task:     to sort values of an array in descending order
//  data in:  the array, the array size
//  data out: the sorted array
//
//******************************************************************
void bubbleSortArray(int array[], int elems)
{
    bool swap;
    int temp;
    int bottom = elems - 1;
    int passCount = 1;  // To track which pass we're on

    do
    {
        swap = false;
        cout << "Pass " << passCount << ":" << endl;

        for (int count = 0; count < bottom; count++)
        {
            // Changed > to < for descending order
            if (array[count] < array[count + 1])
            {
                // Perform swap
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;

                // Display array after each swap
                cout << "  After swap: ";
                displayArray(array, elems);
            }
        }

        if (!swap) {
            cout << "  No swaps needed in this pass" << endl;
        }

        bottom--;
        passCount++;
        cout << endl;

    } while (swap != false);
}

/*

Exercise 1: The variable middle is defined as an integer. The program contains the assignment statement middle=first+(last-first)/2. 
Is the right side of this statement necessarily an integer in computer memory? Explain how the middle value is determined by the computer. 
How does this line of code affect the logic of the program? Remember that first, last, and middle refer to the array positions, not the
values stored in those array positions.

Answer 1: Done

Exercise 2: Modify your program from Exercise 1 so that it prints the array at each step of the algorithm. Try sorting the array

23	0	45	–3	–78	1	–1	9

by hand using whichever algorithm you chose. Then have your program do the sort. Does the output match  what you did by hand?

Answer 2: Yes, the output does match what I did by hand.


*/