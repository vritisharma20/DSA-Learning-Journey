/*
// 1. Input & Output using Loop
// Always use loop to traverse array

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
*/

#include <iostream>
using namespace std;
int main(){

    int size = 5 ; 
    int marks[size];

    for(int i=0; i<size; i++){
        cin>>marks[i];
    }

    // int size = sizeof(marks) / sizeof(marks[0]); // Calculate the number of elements in the array
    // cout << "Size of marks array: " << size << endl;

    //loops : 0 to size-1
    for(int i=0; i<size; i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}