/*
C10_IE1 Assignment
By Wakeland Branz
*/

/*

Write a function that accepts a pointer to a C-string as an argument and displays its contents backward. For instance,
if the string argument is "Gravity" the function should display "ytivarG". Demonstrate the function in a program that
asks the user to input a string then passes it to the function.

*/

#include <iostream>
#include <cstring>
using namespace std;

// Function to display a string in reverse
void displayBackward(const char* str) {
    // Find the length of the string
    int length = strlen(str);

    // Display characters from last to first
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int backwardStringMain() {
    const int MAX_LENGTH = 100;  // Maximum string length
    char userString[MAX_LENGTH]; // Array to hold user input

    // Get string from user
    cout << "Enter a string: ";
    cin.getline(userString, MAX_LENGTH);

    // Display original string
    cout << "Original string: " << userString << endl;

    // Display reversed string
    cout << "Reversed string: ";
    displayBackward(userString);

    return 0;
}