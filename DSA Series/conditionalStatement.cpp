// #include <iostream>  // Include the iostream library for input and output 
// using namespace std; // Use the standard namespace to avoid using "std::" prefix

// int main() {
//     int a = -100; // Initialize the integer variable 'a' with the value -100

//     // Check if 'a' is less than or equal to 0
//     if ((a<=0))
//     {
//         // If the condition is true then print this message
//         cout << "a is positive" << endl;
//     } else {

//         // If the condition is false then print this message
//         cout << "a is negative" << endl;
//     }
//     return 0; // Return 0 to indicate successful program execution
// }

// 

#include <iostream> //Include the iostream library for input and output
using namespace std; //Use the standard namespace to avoid using "Std::" prefix

//Passing Main method
int main() {
    int a; //Initilize the integer variable name 'a'

    // Prompt the user to enter a number
    cout <<"Enter Any Number:";
    cin >> a; // Read the input from the user and store in variable 'a'

    // Check if the number is even by using modulus operator
    if (a%2 == 0) // If the remainder when 'a' is divided by 2 is zero, it is an even numbe
    {
        cout <<"Even Number\n";   // Output that the number is even

    } else {  // If the condition is false, meaning the number is odd
        cout <<"Odd Number\n";  // Output that the number is odd 
    }
    
    return 0; // Return 0 to indicate successful program execution
}