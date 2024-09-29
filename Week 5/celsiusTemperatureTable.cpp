/*
C6_IE2 Assignment
By Wakeland Branz
*/

/*
Assignment description:  
    The formula for converting a temperature from Fahrenheit to Celsius is
    C = (5/9) * (F-32)
    where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function named celsius that accepts a Fahrenheit temperature as an 
    argument. The function should return the temperature, converted to Celsius. Demonstrate the function by calling it in a loop that displays a table 
    of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
*/

#include <iostream>
#include <iomanip>

// C = (5/9) * (F-32)
float celsius(float fahrenheit) {
    return (5.f / 9.f) * (fahrenheit - 32);
}

int celsiusTemperatureTable() {
  
    for (int i = 0; i <= 20; i++) {
        std::cout << "Fahrenheit: " << i << " | Celsius: " << celsius(i) << "\n";
    }

    return 0;
}
