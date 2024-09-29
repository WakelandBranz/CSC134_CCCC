/*
C6_IE1 Assignment
By Wakeland Branz
*/

/*
Assignment description: 

    In physics, an object that is in motion is said to have kinetic energy. The following formula can be used to determine a moving object’s kinetic energy:  

             KE= ½ mv2 

    The variables in the formula are as follows: KE is the kinetic energy, m is the object’s mass in kilograms, and v is the object’s velocity, in meters 
    per second.

    Write a function named kineticEnergy that accepts an object’s mass (in kilograms) and velocity (in meters per second) as arguments. The function 
    should return the amount of kinetic energy that the object has. Demonstrate the function by calling it in a program that asks the user to enter 
    values for mass and velocity.


*/

#include <iostream>
#include <iomanip>

float kineticEnergy(float mass, float velocity) {
    return (0.5 * mass * velocity * velocity);
}

int kineticEnergyMain() {
    float mass = 0;
    float velocity = 0;
    
    std::cout << "What is the object's mass (in kilograms)?\n";
    std::cin >> mass;

    std::cout << "What is the object's velocity (in meters per second)?\n";
    std::cin >> velocity;

    std::cout << "The object's kinetic energy is " << kineticEnergy(mass, velocity) << ".\n";

    return 0;
}
