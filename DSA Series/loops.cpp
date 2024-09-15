//Loop 

//for loop --> A for loop is a control structure in programming that allows you to execute a specific block of code repeatdly.
//         --> When you want to perform the same task multiple times without duplicating your code.

//Syntax:  --> for(initialization; condition; updation){
                    //Work 
//             }


//Example:  --> 
#include <iostream>
using namespace std;

int main(){
    int n = 50;

    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
    
}