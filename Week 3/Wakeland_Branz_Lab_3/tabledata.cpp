// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

// Wakeland Branz

#include <iostream>
#include <iomanip>

int tabledata()  {
  float price1, price2;	// The price of 2 items 
  int	quantity1, quantity2;	// The quantity of 2 items


  std::cout << std::setprecision(2) << std::fixed << std::showpoint;
  std::cout << "Please input the price and quantity of the first item\n";

  // Fill in the input statement that reads in price1 and
  // quantity1 from the keyboard.
  std::cout << "Price: ";
  std::cin >> price1;
  std::cout << "Quantity: ";
  std::cin >> quantity1;

  // Fill in the prompt for the second price and quantity.
  std::cout << "Please input the price and quantity of the second item\n";

  // Fill in the input statement that reads in price2 and
  // quantity2 from the keyboard.
  std::cout << "Price: ";
  std::cin >> price2;
  std::cout << "Quantity: ";
  std::cin >> quantity2;

  std::cout << std::setw(15) << "\nPRICE" << std::setw(12) << "QUANTITY\n\n";

  //Fill in the output statement that prints the first price
  std::cout << "Price of first bill: " << std::setw(15) << price1 * quantity1 << "\nQuantity of first bill: " << std::setw(12) << quantity1 << "\n";

  // Fill in the output statement that prints the second price
  // and quantity.

  std::cout << "Price of second bill: " << std::setw(14) << price2 * quantity2  << "\nQuantity of second bill: " << std::setw(11) << quantity2 << "\n";

  return 0;
}