/*
    ~~~Assignment Operators:
        =    Assign
        +=   Add and assign
        -=   Subtract and assign
        *=   Multiply and assign
        /=   Divide and assign 
        %=   Modulus and assign
*/

#include <iostream>
using namespace std;   
int main(){

    int a = 10 ; // Assigning value 10 to variable a using '=' operator
    cout<< (a += 5) <<endl ;    // Equivalent to a = a + 5 ; Now a will be 15
    cout<< (a -= 3) <<endl ;    // Equivalent to a = a - 3 ; Now a will be 12
    cout<< (a *= 2) <<endl ;    // Equivalent to a = a * 2 ; Now a will be 24
    cout<< (a /= 4) <<endl ;    // Equivalent to a = a / 4 ; Now a will be 6
    cout<< (a %= 2) <<endl ;    // Equivalent to a = a % 2 ; Now a will be 0

    return 0 ;
}