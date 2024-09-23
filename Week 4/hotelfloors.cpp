/*
C5_IE2 Assignment
By Wakeland Branz
*/

/*
Assignment description: Write a program that calculates the occupancy rate for a hotel. The program should start by asking the user how many floors the hotel
has. A loop should then iterate once for each floor. In each iteration, the loop should ask the user for the number of rooms on the floor and how many of them 
are occupied. After all the iterations, the program should display how many rooms the hotel has, how many of them are occupied, how many are unoccupied, and 
the percentage of rooms that are occupied. The percentage may be calculated by dividing the number of rooms occupied by the number of rooms.

NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in this program should skip the entire thirteenth iteration.

Input Validation: Do not accept a value less than 1 for the number of floors. Do not accept a number less than 10 for the number of rooms on a floor.
*/

#include <iostream>
#include <iomanip>

int hotelFloors() {
    int floors = 0;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;
    int rooms, occupiedRooms = 0;

    std::cout << "How many floors does this hotel have?\n";
    std::cin >> floors;

    if (floors < 1) {
        std::cout << "Invalid amount of floors inputted. There must be greater than 1 floor.\n";
        return 0;
    }

    for (int i = 0; i < floors; i++) {
        // Ensure that the 13th floor is not printed
        if (i == 13)
            continue;

        std::cout << "How many rooms are on floor " << i + 1 << "?\n";
        std::cin >> rooms;

        if (rooms < 10) {
            std::cout << "Invalid input. There must be at least 10 rooms on a floor.\n";
            i--; // Decrement i to repeat this floor
            continue;
        }

        std::cout << "How many rooms are occupied on floor " << i + 1 << "?\n";
        std::cin >> occupiedRooms;

        if (occupiedRooms > rooms || occupiedRooms < 0) {
            std::cout << "Invalid input. Occupied rooms must be between 0 and " << rooms << ".\n";
            i--; // Decrement i to repeat this floor
            continue;
        }

        totalRooms += rooms;
        totalOccupiedRooms += occupiedRooms;
    }

    double occupancyRate = static_cast<double>(totalOccupiedRooms) / totalRooms * 100;

    std::cout << "\n--- Hotel Occupancy Report ---\n";
    std::cout << "Total number of rooms: " << totalRooms << "\n";
    std::cout << "Occupied rooms: " << totalOccupiedRooms << "\n";
    std::cout << "Unoccupied rooms: " << (totalRooms - totalOccupiedRooms) << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Occupancy rate: " << occupancyRate << "%" << "\n";

    return 0;
}