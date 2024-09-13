// Variable
// Containers to store Data

// Rules:
    // 1.For any name must be start as - (Underscore)
    // 2.For any name must be end as - (Underscore).
    // 3.Any name must be contain only english characteers a-z A-Z and 
    //   underscore _ and dot .

    // Data Types

        // int - 4bytes
        // float - 4bytes
        // char - 1byte
        // bool - 1byte
        // string - 2bytes
        // list - 8bytes
        // dict - 8bytes
        // set - 8bytes
        
// How to converst Char to Int

// #include <iostream>
// using namespace std;

// int main() {
//     char c = 'a';

//     int value = c;
//     cout <<value;
//     return 0;
// }

// Input in C++

// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout <<"Enter the age:";
//     cin >> age;
//     cout << "Your age is:" <<age;
//     return 0;
// }

// Sum of 2 numbers

#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid using "std::" prefix

int main() {
    int a, b;  // Declare two integer variables 'a' and 'b'
    
    // Prompt the user to enter the first number
    cout << "Enter the First Number:";  
    cin >> a;  // Read the first number from user input and store in 'a'

    // Prompt the user to enter the second number
    cout << "Enter the Second Number:";  
    cin >> b;  // Read the second number from user input and store in 'b'

    // Calculate the sum of the two numbers
    int Sum = a + b;  
    
    // Display the result
    cout << "Sum of two Numbers is: " << Sum;  


    return 0;  // Return 0 to indicate successful program execution
}
