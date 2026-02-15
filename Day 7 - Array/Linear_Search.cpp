/*
// ===============================
// LINEAR SEARCH - NOTES
// ===============================

// 1. What is Linear Search?
// -> Linear Search checks each element one by one.
// -> Used to find a target element in an array.

// 2. How it Works?
// -> Start from index 0
// -> Compare each element with the key
// -> If match found → return index
// -> If loop ends → element not found

// 3. Linear Search Algorithm -

    for i = 0 to n-1
        if arr[i] == key
            return i
    return -1

// 4. Why return -1?
// -> -1 indicates element not found.

*/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        { // If target found, return index
            return i;
        }
    }
    return -1; // If target not found, return -1
}

int main()
{

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 50;

    cout << linearSearch(arr, sz, target) << endl;

    return 0;
}