/*
    ~~~Logical Operators:
        &&  Logical AND -> both conditions must be true
        ||  Logical OR -> at least one condition must be true
        !   Logical NOT -> reverses the boolean value if true then becomes false and if false then becomes true
*/

#include <iostream>
using namespace std;
int main(){

    cout<< !( 3 > 5 ) <<endl; // false but we are using NOT operator so the output will be true -> 1
    cout<< !( 3 < 5 ) <<endl; // true but we are using NOT operator so the output will be false -> 0

    cout<< ( 3 < 5 && 5 > 2 ) <<endl; // both conditions are true so the output will be true -> 1
    cout<< ( 3 > 5 && 5 > 2 ) <<endl; // both conditions are not true so the output will be false -> 0

    cout<< ( 3 > 5 || 5 > 2 ) <<endl; // at least one condition is true so the output will be true -> 1
    cout<< ( 3 > 5 || 5 < 2 ) <<endl; // both conditions are false so the output will be false -> 0
    

    return 0;
}