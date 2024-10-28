/*
C9_IE2 Assignment
By Wakeland Branz
*/

/*

The following function uses reference variables as parameters. Rewrite the function so it uses pointers instead of reference variables, and then 
demonstrate the function in a complete program.

int doSomething(int &x, int &y) {

      int temp = x;

      x = y * 10;

      y = temp * 10;

      return x + y;

}

*/

// Function declarations
int doSomethingReferences(int& x, int& y);
int doSomethingPointers(int* x, int* y);

#include <iostream>
#include <iomanip>

int referencesAndPointersMain() {
    int x = 5;
    int y = 10;

    std::cout << "Before modifying variable values with doSomethingReference function\nx: " << x << "\ny: " << y << "\n";

    std::cout << "Do something function with references: " << doSomethingReferences(x, y) << "\n";

    std::cout << "After modifying variable values with doSomethingReference function\nx: " << x << "\ny: " << y << "\nResetting values...";

    // Reset values
    x = 5;
    y = 10;

    std::cout << "Before modifying variable values with doSomethingPointers function\nx: " << x << "\ny: " << y << "\n";

    std::cout << "Do something function with pointers: " << doSomethingPointers(&x, &y) << "\n";

    std::cout << "After modifying variable values with doSomethingPointers function\nx: " << x << "\ny: " << y << "\n";

    return 0;
}

int doSomethingReferences(int& x, int& y) {

    int temp = x;

    x = y * 10;

    y = temp * 10;

    return x + y;
}

int doSomethingPointers(int* x, int* y) {

    int temp = *x;

    *x = *y * 10;

    *y = temp * 10;

    return *x + *y;
}