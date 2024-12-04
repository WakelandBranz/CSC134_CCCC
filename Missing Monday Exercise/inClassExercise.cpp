/*

Building a Dynamic Temperature Logger
This exercise reinforces pointer concepts while creating something practical. Students will build a simple temperature logging system that uses 
dynamic memory allocation.

*/

#include <stdexcept>
#include <iostream>

class TemperatureLogger {
private:
    double* temperatures;  // Dynamic array of temperatures
    int size;             // Current number of readings
    int capacity;         // Maximum capacity

    void resize(int newCapacity) {
        double* newArray = new double[newCapacity];

        for (int i = 0; i < size; i++) {
            newArray[i] = temperatures[i];
        }

        delete[] temperatures;
        temperatures = newArray;
        capacity = newCapacity;
    }

public:
    // Constructor
    TemperatureLogger(int initialCapacity) {
        if (initialCapacity <= 0) {
            throw std::invalid_argument("Initial capacity must be positive");
        }

        temperatures = new double[initialCapacity];
        size = 0;
        capacity = initialCapacity;
    }

    // Add a temperature reading
    bool addReading(double temp) {
        try {
            if (size == capacity) {
                resize(capacity * 2);
            }

            temperatures[size] = temp;
            size++;
            return true;
        }
        catch (const std::bad_alloc& e) {
            // Handle memory allocation failure
            return false;
        }

        return true;
    }

    // Calculate average temperature
    double getAverage() const {
        if (size == 0) {
            throw std::runtime_error("No temperature readings available");
        }

        double sum = 0.0;
        for (int i = 0; i < size; i++) {
            sum += temperatures[i];
        }
        return sum / size;
    }

    // Get the number of readings
    int getCount() const {
        return size;
    }

    // Get temperature at specific index
    double getReading(int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return temperatures[index];
    }

    // Destructor
    ~TemperatureLogger() {
        delete[] temperatures;
    }
};

int main() {
    try {
        // Create a temperature logger
        TemperatureLogger logger(3);  // Start with capacity of 3

        // Add some readings
        logger.addReading(23.5);
        logger.addReading(24.0);
        logger.addReading(24.5);
        logger.addReading(25.0);  // This will trigger a resize

        // Print all readings
        std::cout << "Temperature readings:\n";
        for (int i = 0; i < logger.getCount(); i++) {
            std::cout << "Reading " << i + 1 << ": "
                << logger.getReading(i) << "�C\n";
        }

        // Print average
        std::cout << "Average temperature: "
            << logger.getAverage() << "�C\n";

    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}

/*

Key Learning Points

Dynamic Memory Allocation: The implementation shows how to properly allocate and deallocate memory using new and delete.
Pointer Usage: We use the temperatures pointer to manage our dynamic array, demonstrating pointer arithmetic and array access.
Resource Management: The destructor ensures we don't leak memory by properly cleaning up our dynamic array.
Error Handling: The code includes robust error checking for invalid inputs and memory allocation failures.
Array Resizing: The resize function shows how to grow a dynamic array while preserving existing data.

Expected Output
When you run the test program, you should see something like:
Temperature readings:
Reading 1: 23.5°C
Reading 2: 24.0°C
Reading 3: 24.5°C
Reading 4: 25.0°C
Average temperature: 24.25°C


*/