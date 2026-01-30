/*
    ~~~Unary Operators
        ++  Increment
        --  Decrement

    // Unary operators are used to increase or decrease the value of a variable by 1.

     ++ Increment Operator:
        - Increases the value of a variable by 1
        - Can be used in two ways:
            1. Pre-increment (++var): Increments the value before using it in an expression
            2. Post-increment (var++): Uses the current value in an expression and then increments it

     -- Decrement Operator:
        - Decreases the value of a variable by 1
        - Can be used in two ways:
            1. Pre-decrement (--var): Decrements the value before using it in an expression
            2. Post-decrement (var--): Uses the current value in an expression and then decrements it
*/

#include <iostream>
using namespace std;
int main()
{

    // Example of Increment Operator
    int a = 10;
    int y = 20;

    int b = a++;                 // Post-increment: b is assigned the value of a (10), then a is incremented to 11
    cout << "b = " << b << endl; // Output: 10
    cout << "a = " << a << endl; // Output: 11

    int x = ++y;                 // Pre-increment: y is incremented to 11, then x is assigned the value of y(11)
    cout << "x = " << x << endl; // Output: 11
    cout << "y = " << y << endl; // Output: 11

    cout << "\n\n";

    // Example of Decrement Operator
    int p = 15;
    int q = 25;

    int r = p--;                 // Post-decrement: r is assigned the value of p (15), then p is decremented to 14
    cout << "r = " << r << endl; // Output: 15
    cout << "p = " << p << endl; // Output: 14

    int s = --q;                 // Pre-decrement: q is decremented to 24, then s is assigned the value of q(24)
    cout << "s = " << s << endl; // Output: 24
    cout << "q = " << q << endl; // Output: 24

    return 0;
}