/*
    2. while loop:
            -Used when the number of iterations is not known and depends on a condition.
            -Syntax:
                while (condition) {
                    // code to be executed
                }
*/

// A program to print numbers from 1 to 10 using a while loop

#include <iostream>
using namespace std;
int main(){
    int i = 1;

    while (i <= 10){
        cout<<i<<endl; // Prints the numbers from 1 to 10 
        i++;
    }

    cout<<endl;
    return 0;
}