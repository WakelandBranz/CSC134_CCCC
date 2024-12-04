/*

Building a Dynamic Temperature Logger
This exercise reinforces pointer concepts while creating something practical. Students will build a simple temperature logging system that uses
dynamic memory allocation.

*/

#include <stdexcept>
#include <iostream>

class TemperatureLogger {
private:
    double* temperatures;  // Dynamic array to store temperature readings
    int size;             // Current number of stored readings
    int capacity;         // Maximum capacity of the array

    // Helper function to resize the array when needed
    void resize(int newCapacity) {
        // Create a new array with larger capacity
        double* newArray = new double[newCapacity];

        // Copy existing elements to new array
        for (int i = 0; i < size; i++) {
            newArray[i] = temperatures[i];
        }

        // Delete old array and update pointer
        delete[] temperatures;
        temperatures = newArray;
        capacity = newCapacity;
    }

public:
    // Constructor initializes the dynamic array
    TemperatureLogger(int initialCapacity = 5) {
        if (initialCapacity <= 0) {
            throw std::invalid_argument("Initial capacity must be positive");
        }

        temperatures = new double[initialCapacity];
        size = 0;
        capacity = initialCapacity;
    }

    // Add a new temperature reading
    bool addReading(double temp) {
        try {
            // If array is full, resize it
            if (size == capacity) {
                resize(capacity * 2);
            }

            // Add new temperature to array
            temperatures[size] = temp;
            size++;
            return true;
        }
        catch (const std::bad_alloc& e) {
            // Handle memory allocation failure
            return false;
        }
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

    // Destructor to clean up dynamic memory
    ~TemperatureLogger() {
        delete[] temperatures;
    }
};

int asdmain() {
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
                << logger.getReading(i) << "°C\n";
        }

        // Print average
        std::cout << "Average temperature: "
            << logger.getAverage() << "°C\n";

    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}