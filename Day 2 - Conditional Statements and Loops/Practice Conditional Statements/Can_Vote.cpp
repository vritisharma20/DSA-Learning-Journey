// Program to check if a person is eligible to vote based on age

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age >= 18){
        cout<<"You can vote."; // if the age is greater than or equal to 18 then if block will execute
    }else{
        cout<<"You cannot vote."; // else block will execute if age is less than 18
    }

    return 0;
}