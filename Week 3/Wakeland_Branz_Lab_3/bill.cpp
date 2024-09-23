/* 
C4_Lab3_3.1 Assignment
By Wakeland Branz Determines the total cost of a bill based on an input of the number of items purchased and the cost per item
*/

// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Wakeland Branz

#include <iostream>
#include <iomanip>
#include <string>

int bill()  {
  int	quantity;	// contains the amount of items purchased  
  float itemPrice;	// contains the price of each item
  float totalBill;	// contains the total bill.
  std::string itemName; // contains the name of the item(s) purchased

  std::cout << std::setprecision(2) << std::fixed << std::showpoint;

  // Requests the name of the item(s) purchased
  std::cout << "Please input the name of the item(s): ";
  std::cin >> itemName;
  
  std::cout << "Please input the number of items bought: ";

  // Fill in the input statement to bring in the quantity.'
  std::cin >> quantity;

  // Fill in the prompt to ask for the price.
  std::cout << "Please input the price of the item(s): ";
  
  // Fill in the input statement to bring in the price of each item.
  std::cin >> itemPrice;

  // Fill in the assignment statement to determine the total bill.
  totalBill = itemPrice * static_cast<float>(quantity); 
  // totally unnecessary cast but I know how to use it!

  // Fill in the output statement to print total bill,
  // with a label to the screen.
  std::cout << "The total bill for your "<< itemName << "(s) is $" << totalBill << "\n";

  return 0;
}

/*
std::fixed writes floating point numbers in fixed notation, which means that the decimal point is always displayed, even if it is a zero.

std::setprecision() sets the number of digits to be printed after the decimal point.


*/