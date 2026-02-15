// We are revering an array using two pointer approach. We will have one pointer at the start of the array and another pointer at the end of the array. We will swap the elements at these two pointers and then move the first pointer towards the end and the second pointer towards the start until they meet.

#include <iostream>
using namespace std;

void reverseArray(int arr[] , int sz){
    int start = 0 , end = sz-1;

    while (start <end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;

    reverseArray(arr,sz);

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}