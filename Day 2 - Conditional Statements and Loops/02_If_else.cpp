/*
 2. if-else statement:
            - Executes one block of code if the condition is true, otherwise executes another block of code.
            if(condition){
                // code to be executed if condition is true
            } else {
                // code to be executed if condition is false
            }
*/

#include <iostream>
using namespace std;
int main(){

    int n = -45;

    if(n>=0){
        cout<<"n is positive"; // if block 
    }else{
        cout<<"n is negative"; // else block
    }

    return 0;
}