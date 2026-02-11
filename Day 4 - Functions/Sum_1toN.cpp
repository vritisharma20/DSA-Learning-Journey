// Calculate sum of numbers from 1 to N 

#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0; // variable to store the sum

    for(int i=1;i<=n;i++){
        sum += i; // add each number from 1 to n to the sum
    }

    return sum; // return the final sum
}
int main(){
    cout <<sumN(5)<<endl; 
    return 0;
}