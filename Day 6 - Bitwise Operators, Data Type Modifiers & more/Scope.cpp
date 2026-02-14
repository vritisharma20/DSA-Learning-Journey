/*
// ================= SCOPE IN C++ =================

// Scope defines where a variable can be accessed in a program.

// There are mainly 3 types of scope:
// 1. Local Scope
// 2. Global Scope
// 3. Block Scope
*/

#include <iostream>
using namespace std;

int x = 10; // Global variable (accessible throughout the file)

int main(){
    cout << x << endl; // Accessing global variable x
}