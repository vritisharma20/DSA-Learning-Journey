//Find the index of smallest/largest in Array

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index1 = 0;
    int index2= 0;
    
    for(int i=0;i<size;i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index1 = i;
        }
    }
    for(int i=0;i<size;i++){
        if(nums[i] > largest){
            largest = nums[i];
            index2 = i;
        }
    }
    
    
    cout << "Smallest element is: " << smallest << endl;
    cout << "Index of smallest element is: " << index1 << endl;
    cout << "Largest element is: " << largest << endl;
    cout << "Index of smallest element is: " << index2 << endl;

    return 0;
}
