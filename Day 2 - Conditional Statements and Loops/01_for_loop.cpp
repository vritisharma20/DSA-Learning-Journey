/*
    1. for loop:
            -Used when the number of iterations is known.
            -Syntax:
                for (initialization; condition; increment/decrement) {
                    // code to be executed
                }

*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl; // Prints the numbers from 1 to n
    }

    cout << endl;
    return 0;
}