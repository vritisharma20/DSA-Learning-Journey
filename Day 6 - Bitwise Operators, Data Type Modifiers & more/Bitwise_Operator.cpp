/*
        ~~~ Bitwise Operators in C++ ~~~

        Bitwise operators work on the binary (0 & 1) representation of numbers.
        They are faster than arithmetic operators and commonly used in low-level programming.

        // Types of Bitwise Operators:

        1. Bitwise AND (&)
            If both bits are 1 → result is 1, else 0
        Example: 5 & 3
            5 = 101, 3 = 011 → result = 001 (1)

        2. Bitwise OR (|)
            If at least one bit is 1 → result is 1
        Example: 5 | 3
            101 | 011 = 111 (7)

        3. Bitwise XOR (^)
            If bits are different → result is 1
            Same bits → 0
        Example: 5 ^ 3
            101 ^ 011 = 110 (6)

        4. Bitwise NOT (~)
            Inverts all bits (0 → 1, 1 → 0)
        Example: ~5
            5 = 00000101 → ~5 = 11111010 (negative value due to 2's complement)

        5. Left Shift (<<)
            Shifts bits to the left and fills 0 on the right
            a << n = a * (2^n)
        Example: 5 << 1 → 10

        6. Right Shift (>>)
            Shifts bits to the right
            a >> n = a / (2^n)
        Example: 5 >> 1 → 2
*/


#include <iostream>
using namespace std;
int main(){
    int a = 4 , b = 8;

    cout<< (a & b) <<endl;
    cout<< (a | b) <<endl;
    cout<< (a ^ b) <<endl;  
    cout<< (~a) <<endl;
    cout<< (a << 1) <<endl;
    cout<< (a >> 1) <<endl;
    

    return 0;
}