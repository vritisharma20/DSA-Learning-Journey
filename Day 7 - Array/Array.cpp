/*
// ===============================
   ~~~ARRAY DATA STRUCTURE - NOTES
// ===============================

// 1. What is an Array?
// -> An array is a collection of elements of the SAME data type.
// -> Stored in CONTIGUOUS memory locations.
// -> Size is FIXED (cannot change after declaration).

// 2. Why contiguous memory?
// -> Because elements are stored side by side.
// -> This allows fast access using index.

// 3. Declaration Syntax
// dataType arrayName[size];
// Example:
    int arr[5]; // declares an array of 5 integers

// 4. Initialization
    int arr1[5] = {1,2,3,4,5};
// If size not given, compiler calculates size
    int arr2[] = {10,20,30};

// 5. Indexing in Array
// -> Index always starts from 0.
// -> arr[0] = first element
// -> arr[n-1] = last element

/ 6. Accessing Elements
// -> Use index number
// -> Access time complexity = O(1)

    int x = arr1[2];  // Access 3rd element

*/

#include <iostream>
using namespace std;
int main(){
    int marks[5] = {90, 80, 70, 60, 50}; // Declare and initialize an array of 5 integers
    marks[0] = 99; // Update the first element of the array
    cout<< marks[0] <<endl; 
    cout<< marks[1] <<endl; // Access the second element of the array
    cout<< marks[2] <<endl; 
    cout<< marks[3] <<endl; 
    cout<< marks[4] <<endl; 

    // index value is  0 to size-1
    cout<<marks[5] <<endl; // Accessing out of bounds (undefined behavior) will give warning or garbage value

    double price[] = {19.99, 29.99, 39.99}; // Declare and initialize an array of doubles (size inferred)

    return 0; 
}