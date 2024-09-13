#include <iostream>  // Include the iostream library for input and output 
using namespace std; // Use the standard namespace to avoid using "std::" prefix

int main() {
    int a = -100; // Initialize the integer variable 'a' with the value -100

    // Check if 'a' is less than or equal to 0
    if ((a<=0))
    {
        // If the condition is true then print this message
        cout << "a is positive" << endl;
    } else {

        // If the condition is false then print this message
        cout << "a is negative" << endl;
    }
    return 0; // Return 0 to indicate successful program execution
}