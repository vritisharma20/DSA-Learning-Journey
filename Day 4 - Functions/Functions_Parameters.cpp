/*
        Function Parameters:
            - Input values passed to functions
            - Specified in function definition and declaration
            - Can have multiple parameters separated by commas

        Function Parameter Syntax:
            returnType funName(type p1, type p2, ...) {
                // function body
            return value;
        }

        ~~~Parameters vs Arguments:
            - Parameters: Variables in function definition that are the copy of the arguments
            - Arguments: Actual values passed during function call
*/

// Sum of 2 numbers using functions

#include <iostream>
using namespace std;

// Sum of 2 numbers function definition with parameters
int sum(int a, int b) // parameters
{
    int s = a + b;
    return s;
}

// minimum of 2 numbers function definition with parameters
int minOfTwo(int x, int y) // parameters
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

int main()
{
    cout << "Sum : " << sum(5, 10) << endl; // arguments

    cout << "Minimum : " << minOfTwo(15, 7) << endl; // arguments

    return 0;
}