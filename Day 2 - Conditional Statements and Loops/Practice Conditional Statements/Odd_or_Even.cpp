// Program to check if a number is odd or even

#include <iostream>
using namespace std;
int main(){

    int num ;
    cout<<"Enter a number : ";
    cin>>num;

    if(num%2 == 0){
        cout<<"Number is Even."; // if block will execute if number is divisible by 2
    }else{
        cout<<"Number is Odd."; // else block will execute if number is not divisible by 2
    }

    return 0;
}