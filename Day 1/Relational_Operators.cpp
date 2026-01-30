/*
    ~~~Relational Operators:
        ==  Equal to
        !=  Not equal to
        >   Greater than
        <   Less than
        <=  Less than or equal to
        >=  Greater than or equal to

    // Relational operators are used to compare two values. They return a boolean value (true or false) based on the comparison.
*/

#include <iostream>
using namespace std;
int main(){

    cout<< (3 < 5) <<endl; // true -> 1
    cout<< (3 > 5) <<endl; // false -> 0
    cout<< (3 >= 5) <<endl; // false -> 0
    cout<< (3 <= 5) <<endl; // true -> 1
    cout<< (3 == 5) <<endl; // false -> 0
    cout<< (3 != 5) <<endl; // true -> 1

    return 0;
}