/*
    3. do-while loop:
            -Similar to while loop, but the code block is executed at least once before checking the condition.
            -Syntax:
                do {
                    // code to be executed
                } while (condition);
*/

#include <iostream>
using namespace std;
int main(){

    int n = 10;
    int i = 1;

    do{
        cout<<i<<endl; // do block while will execute at least once either condition is true or false
        i++;
    }while( i <= n);

    cout<<endl;
    return 0;
}