/*
  ~~~ Arithmetic Operators:
        +   Addition
        -   Subtraction
        *   Multiplication
        /   Division
        %   Modulus (remainder)
*/

#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 5;

    //int sum = a + b; // Addition is done using '+' operator and stored in sum variable

    cout<<"Sum : "<<(a + b)<<endl;
    cout<<"Difference : "<<(a - b)<<endl;
    cout<<"Product : "<<(a * b)<<endl;
    cout<<"Division : "<<(a / b)<<endl; // in division if both operands are integers then the result will also be an integer and the decimal part will be terminated in the output
    // we can get thw decimal part in division by making one operand as double or float or can do type casting
    cout<<"Modulus : "<<(a % b)<<endl;
    return 0;
}