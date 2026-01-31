/*
    ~~~Nested Loops in C++
        A nested loop is a loop inside another loop. The "inner loop" will be executed one time for each iteration of the "outer loop".

    Syntax:
        for (initialization; condition; increment/decrement) {
            for (initialization; condition; increment/decrement) {
                // code to be executed
            }
            // code to be executed
        }  
*/


#include <iostream>
using namespace std;
int main(){
    int n = 10;
    
    for(int i=1;i<=n;i++){
        int m=10;
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}