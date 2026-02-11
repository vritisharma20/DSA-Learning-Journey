/*
    ~~~Functions in C++
         Function = A block of code that performs a specific task
            Helps in code reusability, readability & modularity

         Why Functions?
            - Avoid code repetition
            - Break complex problems into smaller parts
            - Easy debugging & maintenance
    
        Function Syntax:
            return_type function_name(parameters) {
                // function body
            return value;
        }

*/


// Printing Hello

#include <iostream>
using namespace std;

//function defintion
void printHello(){
    cout<<"Hello..!!"<<endl;
}

int main(){
    printHello(); //function call
    return 0;
}