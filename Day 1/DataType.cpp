/*
Data Types in C++:
    (a) int
        - Used to store integers
        - Example: int x = 10;

    (b) float
        - Used to store decimal values
        - Example: float pi = 3.14;

    (c) double
        - Stores decimal values with more precision
        - Example: double d = 3.14159;

    (d) char
        - Used to store a single character
        - Written inside single quotes
        - Example: char ch = 'A';

    (e) bool
        - Stores true or false
        - Example: bool isValid = true;
*/

#include <iostream>
using namespace std;
int main()
{
    int age = 25;
    float weigth = 55.5;
    double pi = 3.14159;
    char ch = 'V';
    bool isStudent = true;

    cout << age << endl;
    cout << weigth << endl;
    cout << pi << endl;
    cout << ch << endl;
    cout << isStudent << endl;
}


/*
    Size of Data Types (approx):
        - int    → 4 bytes
        - float  → 4 bytes
        - double → 8 bytes
        - char   → 1 byte
        - bool   → 1 byte
*/