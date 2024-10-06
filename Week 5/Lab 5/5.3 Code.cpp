/*
Lab 5.3 Exercises 1-2 Assignment
By Wakeland Branz
*/

// This program has the user input a number n and then finds the
// mean of the first n positive integers



#include <iostream>
#include <iomanip>

int lab_3_main() {
    int n, m;  // n is the start value, m is the end value
    int total = 0;  // total holds the sum of the numbers from n to m
    int count = 0;  // count of numbers in the range
    float mean;  // the average of the numbers from n to m

    std::cout << "Please enter two positive integers (n and m, where n <= m):\n";
    std::cin >> n >> m;

    if (n > 0 && m >= n) {
        for (int number = n; number <= m; number++) {
            total += number;
            count++;
        }
        mean = static_cast<float>(total) / count;
        std::cout << "The mean average of the integers from " << n << " to " << m << " is " << mean << "\n";
    }
    else {
        std::cout << "Invalid input - both integers must be positive and n must not be greater than m\n";
    }

    return 0;
}


/*
Exercise questions:

    Exercise 1: Why is the typecast operator needed to compute the mean in the statement mean = static_cast(float)(total)/value;? 
    What do you think will happen if it is removed? Modify the code and try it. Record what happens.
    Make sure that you try both even and odd cases. Now put static_cast<float> total back in the program.
        
        Answer: The typecast operator is needed to computer the mean in the statement because we need the fractional part of the result.
        If we remove the static cast, the result will be truncated to an integer meaning that it is innaccurate.

        For example: 
        Even case (e.g., value = 4):

        total would be 10 (1 + 2 + 3 + 4)
        mean would be 10 / 4 = 2 (integer division)


        Odd case (e.g., value = 5):

        total would be 15 (1 + 2 + 3 + 4 + 5)
        mean would be 15 / 5 = 3 (integer division)

    Exercise 2: What happens if you enter a float such as 2.99 instead of an integer for value? Try it and record the results.
        
        Answer: When you enter a float such as 2.99 instead of an integer for value, the fractional part of the number will be truncated. Therefore
        the 2.99 will be 2 in the C++ program. THe porgram will then calculat ethe mena of the first 2 positive
        integers, and the output will be "The mean average of the first 2 positive integers is 1.5".

    Exercise 3: Modify the code so that it computes the mean of the consecutive positive integers n, n+1, n+2, . . . , m, where the 
    user chooses n and m. For example, if the user picks 3 and 9, then the program should find the mean of 3, 4, 5, 6, 7, 8, and 9, which is 6.
        
        Complete
*/

/*
Original main function:

int main() {
    int value;    // value is some positive number n
    int total = 0;    // total holds the sum of the first n positive numbers 
    int number;    // the amount of numbers
    float mean;    // the average of the first n positive numbers
    std::cout << "Please enter a positive integer\n"; 
    std::cin >> value;
    if (value > 0)  {
        for (number = 1; number <= value; number++)
        {
            total = total + number;
        } // curly braces are optional since there is only one statement
        mean = static_cast<float>(total) / value; // note the use of the typecast
        // operator here 
        std::cout << "The mean average of the first " << value << " positive integers is " << mean << "\n";
    }
    else {
        std::cout << "Invalid input - integer must be positive\n";
    }

    return 0;
}

*/