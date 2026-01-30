/*
    Type Casting:
        - Type casting means converting one data type into another
        - in typr casting there are 2 types:
            1. Implicit Type Casting
            2. Explicit Type Casting

    Why Type Casting?
        - To avoid data loss
        - To get correct results in calculations

    1. Implicit Type Casting:
        - Done automatically by the compiler
        - Smaller data type is converted to larger data type
        ~~ Small data type --> Larger data type
    
    2. Explicit Type Casting:
        - Done manually by the programmer
        - Larger data type is converted to smaller data type
        ~~ Large data type --> Smaller data type
*/
#include <iostream>
using namespace std;
int main(){

    // ~~ Implicit Type Casting ~~
    //Here we want to convert the char data type into int data type
    char grade = 'A'; // storing a character in char variable named grade

    int value = grade; // implicit type casting from char to int
    cout<<value<<endl; // Now the ouput will be the ASCII value of char 'A' which is 65


    // ~~ Explicit Type Casting ~~
    double price = 45.99; // storing a double value in double variable named price

    int newPrice = (int) price; // explicit type casting from double to int
    cout<<newPrice<<endl; // Now the output will be 45 (decimal part is terminated)


    return 0;
}