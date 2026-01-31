/*
    ~~~ Break Statement in C++
        -The break statement is used to exit a loop or switch statement prematurely.
        -When a break statement is encountered inside a loop, the loop is immediately terminated,
        and the program control is transferred to the statement following the loop.
        -Break statement is also known as jump statement.
*/

#include <iostream>
using namespace std;
int main(){

    int n = 10;

    for(int i=1;i<=n;i++){
        if(i==6){
            break; // Exit the loop when i is 6
        }
        cout<<i<<endl; // Prints numbers from 1 to 5
    }
}