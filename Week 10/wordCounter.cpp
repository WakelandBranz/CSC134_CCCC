/*
C10_IE2 Assignment
By Wakeland Branz
*/

/*

Write a function that accepts a pointer to a C-string as an argument and returns the number of words contained in the string. 
For instance, if the string argument is “Four score and seven years ago” the function should return the number 6. 
Demonstrate the function in a program that asks the user to input a string then passes it to the function. 
The number of words in the string should be displayed on the screen. 
Optional Exercise: Write an overloaded version of this function that accepts a string class object as its argument.

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function that counts words in a C-string
int countWords(const char* str) {
    int wordCount = 0;
    bool inWord = false;

    // Iterate through each character in the string
    while (*str) {
        // If current character is not whitespace
        if (!isspace(*str)) {
            // If we weren't already in a word, increment count
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
        // If current character is whitespace, mark that we're not in a word
        else {
            inWord = false;
        }
        str++;  // Move to next character
    }

    return wordCount;
}

// Overloaded function that counts words in a string object
int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;

    // Iterate through each character in the string
    for (char c : str) {
        // If current character is not whitespace
        if (!(c == ' ')) {
            // If we weren't already in a word, increment count
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
        // If current character is whitespace, mark that we're not in a word
        else {
            inWord = false;
        }
    }

    return wordCount;
}

int wordCounterMain() {
    const int MAX_LENGTH = 1000;  // Maximum string length
    char cString[MAX_LENGTH];     // Array for C-string input
    string stringObj;             // String object for second test

    // Test with C-string
    cout << "Enter a sentence (C-string version): ";
    cin.getline(cString, MAX_LENGTH);

    cout << "Number of words (C-string version): "
        << countWords(cString) << endl;

    // Test with string object
    cout << "\nEnter a sentence (string object version): ";
    getline(cin, stringObj);

    cout << "Number of words (string object version): "
        << countWords(stringObj) << endl;

    return 0;
}