/*
C11_IE2 Assignment
By Wakeland Branz
*/

/*

Write a program that stores the following data about a soccer player in a structure :

Player’s Name
Player’s Number
Points Scored by Player

The program should keep an array of 12 of these structures.Each element is for a different player on a team.When the program runs, 
it should ask the user to enter the data for each player.It should then show a table that lists each player’s number, name, and points scored.
The program should also calculate and display the total points earned by the team. The number and name of the player who has earned the most 
points should also be displayed.

Input Validation : Do not accept negative values for players’ numbers or points scored.

*/

#include<iostream>
#include<string>
#include<iomanip>

struct Player {
    std::string name;
    int number;
    int pointsScored;

    void printFormatted() {
        std::cout << std::left << std::setw(15) << number
            << std::setw(25) << name
            << std::setw(10) << pointsScored << std::endl;
    }
};

/// Helper function to validate input
bool validateInput(int value) {
    return value >= 0;
}

/// Retrieves player data from user
void getPlayerData(Player& player) {
    // Get player number
    while (true) {
        std::cout << "Enter player number: ";
        if (std::cin >> player.number && validateInput(player.number)) {
            break;
        }
        std::cout << "Invalid input. Enter a non-negative number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Clear buffer for name input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Get player name
    std::cout << "Enter player name: ";
    std::getline(std::cin, player.name);

    // Get points scored
    while (true) {
        std::cout << "Enter points scored: ";
        if (std::cin >> player.pointsScored && validateInput(player.pointsScored)) {
            break;
        }
        std::cout << "Invalid input. Enter a non-negative number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

// Function to print header
// I hate formatting tables ;(
void printTableHeader() {
    std::cout << std::left << std::setw(15) << "Number"
        << std::setw(25) << "Name"
        << std::setw(10) << "Points" << std::endl;
    std::cout << std::string(50, '-') << std::endl;
}


int soccerPlayerMain() {
    const int TEAM_SIZE = 12;
    Player team[TEAM_SIZE];
    int totalPoints = 0;
    int maxPoints = -1;
    int maxPointsIndex = 0;

    // Get data for each player
    for (int i = 0; i < TEAM_SIZE; i++) {
        std::cout << "\nEnter data for player " << (i + 1) << ":\n";
        getPlayerData(team[i]);
        totalPoints += team[i].pointsScored;

        if (team[i].pointsScored > maxPoints) {
            maxPoints = team[i].pointsScored;
            maxPointsIndex = i;
        }
    }

    // Display team data
    std::cout << "\nTeam Statistics:\n";
    printTableHeader();
    for (int i = 0; i < TEAM_SIZE; i++) {
        team[i].printFormatted();
    }

    // Display summary
    std::cout << "\nTotal Team Points: " << totalPoints << std::endl;
    std::cout << "Top Scorer: " << team[maxPointsIndex].name
        << " (Number " << team[maxPointsIndex].number
        << ") with " << maxPoints << " points" << std::endl;

    return 0;
}