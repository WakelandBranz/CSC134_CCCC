/*
Lab 5.1 Exercises 1-2 Assignment
By Wakeland Branz
*/


#include <iostream>
#include <iomanip>



int main() {

    char letter = 'a';

    std::cout << "Enter any letter other than 'x' to continue the program. If 'x' is entered, the program will terminate.\n";
    
    while (letter != 'x') {
        std::cout << "Please enter a letter\n";
        std::cin >> letter;
        std::cout << "The letter you entered is " << letter << "\n";
    }

    std::cout << "You entered 'x'! Exiting program...";

    return 0;
}

/*
Exercise questions:

    Exercise 1: This program is not user friendly. Run it a few times and explain why.
        Answer: This program is not user friendly because the program does not describe what conditions terminate the program and does not notify the user
        when the program is to be terminated.

    Exercise 2: Add to the code so that the program is more user friendly.
        Complete


*/