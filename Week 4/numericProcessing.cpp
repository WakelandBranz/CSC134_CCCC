/*
C5_IE3 Assignment
By Wakeland Branz
*/

/*

Assignment description: 

    For this programming problem, download the file Random.txt from the book’s companion website. This file contains a long list of random numbers. 
    Then, write a program that opens the file, reads all the numbers from the file, and calculates the following:
    A) The number of numbers in the file
    B) The sum of all the numbers in the file (a running total)
    C) The average of all the numbers in the file
    The program should display the number of numbers found in the file, the sum of the numbers, and the average of the numbers.

*/

#include <iostream>
#include <iomanip>
#include <fstream>

int numericProcessing() {
    int numCount = 0;
    int sum = 0;
    std::ifstream inputFile;

    inputFile.open("Week 4/Random.txt");

    if (!inputFile) {
        std::cerr << "Error opening file. Make sure 'Random.txt' is in the same directory as the program.\n";
        return 1;
    }

    int currentNumber = 0;
    while (inputFile >> currentNumber) {
        numCount++;
        sum += currentNumber;
        //std::cout << "Read number: " << currentNumber << "\n";
    }

    std::cout << "--- Numeric Processing Output ---\n";
    std::cout << "Number count: " << numCount << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << static_cast<float>(sum) / static_cast<float>(numCount) << "\n";
    
    return 0;
}