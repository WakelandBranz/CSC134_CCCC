/*
C10_IE4 Assignment
By Wakeland Branz
*/

/*

Code the Chapter 10 in class exercise1 using the C++ string class

*/

#include <iostream>
#include <string>
using namespace std;

// Function to display a string in reverse
void displayBackward(const string& str) {
    // Display characters from last to first
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int backwardStringIdiomaticMain() {
    string userString; // String to hold user input

    // Get string from user
    cout << "Enter a string: ";
    getline(cin, userString);

    // Display original string
    cout << "Original string: " << userString << endl;

    // Display reversed string
    cout << "Reversed string: ";
    displayBackward(userString);

    return 0;
}