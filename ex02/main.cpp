#include "Array.hpp"

int main() {
    // Test the Array class
    try {
        // Create an empty array
        Array<int> emptyArray;

        // Create an array of 5 elements initialized by default
        Array<int> intArray(5);

        // Access elements using subscript operator
        for (size_t i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }

        // Copy constructor
        Array<int> copiedArray(intArray);

        // Assignment operator
        Array<int> assignedArray = intArray;

        // Modify the original array without affecting the copied array
        intArray[2] = 100;

        // Print elements of the arrays
        std::cout << "intArray: ";
        for (size_t i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "copiedArray: ";
        for (size_t i = 0; i < copiedArray.size(); ++i) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "assignedArray: ";
        for (size_t i = 0; i < assignedArray.size(); ++i) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        // Access out of bounds element (should throw an exception)
        std::cout << "Accessing out of bounds element..." << std::endl;
        intArray[10] = 999; // This will throw an std::out_of_range exception
    } catch (const std::exception& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}