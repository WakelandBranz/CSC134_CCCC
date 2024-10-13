/*
C7_IE2 Assignment
By Wakeland Branz
*/

/*

Write a program that lets the user enter the total rainfall for each of 12 months into
an array of doubles. The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.


Input Validation: Do not accept negative numbers for monthly rainfall figures

*/

#include <iostream>
#include <iomanip>

int rainfallStatisticsMain() {
    double rainfall[12];
    double totalRainfall = 0;
    double average = 0;
    int highestRainfall = 0;
    int lowestRainfall = 0;

    double high = 0;
    double low = std::numeric_limits<double>::max();

    for (int i = 0; i < 12; i++) {
        std::cout << "What was the rainfall for month " << i + 1 << "? (input cannot be negative!) - ";
        std::cin >> rainfall[i];

        // Ensure that input is non-negative
        if (rainfall[i] < 0) {
            std::cout << "Rainfall cannot be negative.";
            return 1;
        }

        // Calculate highest monthly rainfall
        if (rainfall[i] > high) {
            high = rainfall[i];
            highestRainfall = i + 1;
        }

        // Calculate lowest monthly rainfall
        if (rainfall[i] < low) {
            low = rainfall[i];
            lowestRainfall = i + 1;
        }

        // Calculate total rainfall over 12 months
        totalRainfall += rainfall[i];
    }
    average = totalRainfall / 12;

    // Display results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nRainfall Summary:\n";
    std::cout << "Total rainfall for the year: " << totalRainfall << " inches\n";
    std::cout << "Average monthly rainfall: " << average << " inches\n";
    std::cout << "Month with highest rainfall: " << highestRainfall << " (" << high << " inches)\n";
    std::cout << "Month with lowest rainfall: " << lowestRainfall << " (" << low << " inches)\n";
    
    return 0;
}