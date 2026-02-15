/*
// ===============================
// PASS BY REFERENCE - NOTES
// ===============================

// 1. What is Pass By Reference?
// -> In pass by reference, we pass the ADDRESS of a variable to a function.
// -> Any changes made inside the function affect the original variable.

// 2. How to Declare?
// -> Use & (reference operator) in function parameters.


// Example:
    void update(int &x) {
        x = x + 10;
}

// 3. Why use & ?
// -> & makes the parameter a reference to the original variable.
// -> No new copy is created.
// -> Both variables refer to same memory location.


// IN PASS BY REFERENCE, CHANGES MADE INSIDE THE FUNCTION AFFECT THE ORIGINAL VARIABLE OUTSIDE THE FUNCTION.
*/


#include <iostream>
using namespace std;

void changeArr(int arr[] , int size){
    cout<<"In function : " <<endl;
    for(int i=0;i<size;i++){
        arr[i] = 2*arr[i]; // This will change the original array because we are passing the reference (address) of the array   
    }
}
int main(){
    int arr[] = {1, 2, 3};

    changeArr(arr, 3); // Pass the array to the function 

    cout<<"In main : " <<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    return 0;
}