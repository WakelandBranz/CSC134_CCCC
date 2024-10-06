/*
C7_IE1 Assignment
By Wakeland Branz
*/

/*
* 
Write a program that lets a maker of chips and salsa keep track of sales for five different types of salsa: mild, medium, sweet, hot, and zesty. 
The program should use two parallel 5-element arrays: an array of strings that holds the five salsa names, and an array of integers that holds 
the number of jars sold during the past month for each salsa type. The salsa names should be stored using an initialization list at the time 
the name array is created. The program should prompt the user to enter the number of jars sold for each type. Once this sales data has been 
entered, the program should produce a report that displays sales for each salsa type, total sales, and the names of the highest 
selling and lowest selling products.

Input Validation: Do not accept negative values for number of jars sold.

*/

#include <iostream>
#include <iomanip>

int main() {
    std::string salsaTypes[5] = { "mild", "medium", "sweet", "hot", "zesty" };
    int salsaSales[5];
    std::string highestSold = "";
    std::string lowestSold = "";

    int high = 0;
    int low = std::numeric_limits<int>::max();
    for (int i = 0; i < 5; i++) {
        std::cout << "How many jars of " << salsaTypes[i] << " salsa have been sold (cannot be negative): ";
        std::cin >> salsaSales[i];

        if (salsaSales[i] < 0) {
            std::cout << "You cannot enter a negative number of jars sold.";
            return 1;
        }
         
        if (salsaSales[i] > high) {
            high = salsaSales[i];
            highestSold = salsaTypes[i];
        }

        if (salsaSales[i] < low) {
            low = salsaSales[i];
            lowestSold = salsaTypes[i];
        }

    }

    // Calculate total sales
    int totalSales = 0;
    for (int sales : salsaSales) {
        totalSales += sales;
    }

    // Generate report
    std::cout << "\nSales Report:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << salsaTypes[i] << " salsa: " << salsaSales[i] << " jars\n";
    }
    std::cout << "Total sales: " << totalSales << " jars\n";
    std::cout << "Highest selling product: " << highestSold << "\n";
    std::cout << "Lowest selling product: " << lowestSold << "\n";

    return 0;
}