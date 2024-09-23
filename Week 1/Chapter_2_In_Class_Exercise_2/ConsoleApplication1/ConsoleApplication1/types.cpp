/* Chapter 2 In Class Exercise 2 - By Wakeland Branz - Prints the size of char, int, float, and double data types.*/

#include <iostream>

int types()
{
    std::cout << "Size of char: " << sizeof(char) << " byte(s)\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";

    return 0;
}
