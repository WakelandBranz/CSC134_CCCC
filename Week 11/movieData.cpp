/*
C11_IE1 Assignment
By Wakeland Branz
*/

/*

Write a program that uses a structure named MovieData to store the following information about a movie:

    Title
    Director
    Year Released
    Running Time (in minutes)

The program should create two MovieData variables, store values in their members, and pass each one, in turn, to a function that displays the
information about the movie in a clearly formatted manner.

*/

#include<iostream>
#include<string>

struct MovieData {
    std::string title;
    std::string director;
    int yearReleased;
    int runningTimeMinutes;

    void printFormatted() {
        std::cout << title << " was directed by " << director << " and released in " << yearReleased << ". Its run time is " << runningTimeMinutes << " minutes.\n";
    }
};

int movieDataMain() {
    MovieData cars;
    cars.title = "Cars";
    cars.director = "John Lasseter";
    cars.yearReleased = 2006;
    cars.runningTimeMinutes = 117;

    MovieData deadpool1;
    deadpool1.title = "Deadpool 1";
    deadpool1.director = "Tim Miller";
    deadpool1.yearReleased = 2016;
    deadpool1.runningTimeMinutes = 108;

    cars.printFormatted();
    deadpool1.printFormatted();


    return 0;
}