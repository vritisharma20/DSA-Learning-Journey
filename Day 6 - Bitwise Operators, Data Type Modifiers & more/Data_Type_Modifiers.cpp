/*
// ================= DATA TYPE MODIFIERS =================

// Modifiers change size or range of data types

// 1. short
// short int -> smaller range than int

// 2. long
// long int -> larger range than int

// 3. long long
// Very large integers (used in competitive programming)

// 4. signed
// Can store positive and negative values

// 5. unsigned
// Can store only positive values (range increases)

// Example:
unsigned int x = 10;   // Only positive numbers
long long int y = 1000000000;
*/

#include <iostream>
using namespace std;
int main(){

    cout<< sizeof(int)<<endl;
    cout<< sizeof(long int)<<endl;
    cout<< sizeof(short int)<<endl;
    cout<< sizeof(long long int)<<endl;
}