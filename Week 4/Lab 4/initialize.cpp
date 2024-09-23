// This program tests whether or not an initialized value
// is equal to a value input by the user

// Wakeland Branz

#include <iostream> 

int initialize()	{
	int num1;
	int num2;	// Neither value is initialized

	std::cout << "Please enter an integer for num1\n"; 
	std::cin >> num1;

	std::cout << "Please enter an integer for num2\n";
	std::cin >> num2;

	std::cout << "num1 = " << num1 << " and num2 = " << num2 << "\n"; 
	if (num1 == num2) {
		std::cout << "Hey, that's a coincidence!\n";
	}
	else if (num1 != num2) {
		std::cout << "The values are not the same\n";
	}
		

	return 0;
}

/*

Exercise 1: The program did not do what I expected. It would display any 2 integer values as equivalent. The error was in the if statement where
the two values were being compared with a = sign, not a == operator. num1 = num2 assigns the value of num2 to num1 in the if statement.

Exercise 2: Modify   the program so that the user   inputs both values to be tested for equality. Make sure you have a prompt 
for each input. Test the program with pairs of values that are the same and that are different.

Complete! 

*/

