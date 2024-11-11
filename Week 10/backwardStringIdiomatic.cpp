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

int main() {
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