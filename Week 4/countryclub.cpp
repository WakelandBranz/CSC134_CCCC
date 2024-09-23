/*
C5_IE1 Assignment
By Wakeland Branz 
*/

/*
Assignment description: A country club, which currently charges $2,500 per year for membership, has announced it will increase its membership fee 
by 4 percent each year for the next 6 years. Write a program that uses a loop to display the projected rates for the next 6 years.
*/

#include <stdio.h> // Am I allowed to use this library if it is my personal preference?
#include <iomanip>

int countryclub() {
    float charge = 2500.f;

    printf("--- Country Club Rates ---\nBase rate: $%.2f\n", charge);

    for (int i = 0; i < 6; i++) {
        charge *= 1.04;
        printf("Year %d price: $%.2f\n", i + 2, charge);
    }


    //std::cout << "--- COUNTRY CLUB RATES ---\nBase rate: " << baseCharge << "\n";

    // Loop to determine membership fee price
    //for (int i = 0; i < 6; i++) {
        //baseCharge *= 1.04;
        //std::cout << std::setprecision(2) << "Year " << i + 1 << ": $" << baseCharge << "\n";
    //}

    return 0;
}