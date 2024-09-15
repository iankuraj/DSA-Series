// Variable --> Variable are a Containers to store any Data.

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

//Type Casting --> Converting data from one type to another
        
// How to converst Char to Int

#include <iostream>
using namespace std;

int main() {
    char c = 'a';

    int value = c;
    cout <<value;
    return 0;
}

//Input in C++

#include <iostream>
using namespace std;

int main() {
    int age;
    cout <<"Enter the age:";
    cin >> age;
    cout << "Your age is:" <<age;
    return 0;
}

//Example of Arithmetic Operator
// Sum of 2 numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter the First Number:";  
    cin >> a;  

    cout << "Enter the Second Number:";  
    cin >> b;
    
    int Sum = a + b;  

    cout << "Sum of two Numbers is: " << Sum;  
    return 0;
}


//Operators --> There are diff types of Operators
                //(i)Arithmetic -->     +,-,*,/
                //(ii)Logical  -->      //AND(&&) It will returns True->True/False->False
                                        //OR(||)It will always returns Same Values,like both condition are true it will returns True either both condition are false it will returns False
                                        //NOT(!) It will returns True->False/False->True
                //(iii)Relational -->   <, <=, >, >=, ==, != It will always return boolean values.


