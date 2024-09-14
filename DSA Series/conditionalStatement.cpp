// Conditional Statement 
//Conditional Statement are indispensable tool for controlling the flow of your Program.

//If the conditiona in the "If Statement" is true, a block of code inside the if block will be executed.
//If the conditiona in the "If Statement" is false, a block of code inside the else block will be executed.

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



// #include <iostream> 
// using namespace std;

// int main() {
//     int a; 

//     cout <<"Enter Any Number:";
//     cin >> a; 

    
//     if (a%2 == 0) 
//     {
//         cout <<"Even Number\n";

//     } else {  
//         cout <<"Odd Number\n"; 
//     }

//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"Enter Your Age:";
//     cin>>a;

//     if(a%2 == 0){
//         cout<<"You are Adult"<<endl;
//     } else {
//         cout<<"You are not Adult"<<endl;
//     }
    
//     return 0;
// }

//Let's say we want to grade students based on their marks within specific ranges:
#include <iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter Your Marks:";
    cin>>marks;

    if (marks >= 90)
    {
        cout<<"Grade A"<<endl;
    } else if (marks >=80 && marks<90)
    {
        cout<<"Grade B"<<endl;
    } else{
        cout<<"Grade C"<<endl;
    }
    return 0;
}