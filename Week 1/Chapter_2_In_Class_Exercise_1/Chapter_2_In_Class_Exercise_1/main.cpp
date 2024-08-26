/* Average Values Program by Wakeland Branz - 8/25/2024 */

#include <iostream> // Are you okay with me using stdio.h rather than iostream for printing? I much prefer printf over cout, but I understand if the course requires otherwise.

int main()
{
    // Assign values
    float val1 = 28.f;
    float val2 = 32.f;
    float val3 = 37.f;
    float val4 = 24.f;
    float val5 = 33.f;
    
    // Get sum and divide by total amount of values
    float sum = val1 + val2 + val3 + val4 + val5;
    float average = sum / 5.f;
    
    // Display average to output
    std::cout << "The average value is: " << average << "\n";

    return 0;
}