/*
    ~~~Ternary Statement in C++
        -The Ternary Operator is a shorthand way of writing an if-else statement.
        -It is also known as the conditional operator.

        ~~~Syntax:
            condition ? expression1 : expression2;
        
            -If the condition is true, expression1 is executed, otherwise expression2 is executed.
*/

#include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    string result = ( num >= 0 ) ? "Positive" : "Negative";
    cout<<"The number is "<<result<<endl;

    return 0;
}