// Calculate N Factorial

#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact *= i; // multiply each number from 1 to n to the factorial
    }

    return fact; // return the final factorial
}
int main(){

    cout<<factorialN(5)<<endl;
    cout<<factorialN(4)<<endl;
    return 0;
}