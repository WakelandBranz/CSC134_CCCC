/*
C8_IE2 Assignment
By Wakeland Branz
*/

/*

A lottery ticket buyer purchases ten tickets a week, always playing the same ten 5-digit “lucky” combinations. Write a program that initializes an array 
with these numbers, then lets the player enter this week’s winning 5-digit number. The program should perform a linear search through the list of the 
player’s numbers and report whether or not one of the tickets is a winner this week. 

Here are the numbers: 133579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121

*/

#include <iostream>
#include <iomanip>

int lotteryTicketmain() {

    std::string lotteryTicketNumbers[10] = { "13579", "26791", "26792", "33445", "55555", "62483", "77777", "79422", "85647", "93121"};
    std::string userEntry = "";
    std::cout << "Enter this week's winning number: ";
    std::cin >> userEntry;
    if (userEntry.length() > 5 || userEntry.length() < 5) {
        std::cout << "This is not a valid ticket number. Exiting program...\n";
        return 0;
    }

    bool isWinningTicket = false;

    for (int i = 0; i < 10; i++) {
        if (userEntry == lotteryTicketNumbers[i]) {
            isWinningTicket = true;
        }
    }

    if (isWinningTicket) {
        std::cout << "Congratulations! You have won this week's lottery!\n";
    }
    else {
        std::cout << "Unfortunately, you have not won this week's lottery.\n";
    }

    return 0;
}