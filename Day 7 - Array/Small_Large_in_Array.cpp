// Find smallest/largest in Array

#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;
int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // smallest = min(nums[i], smallest); // you can also use if condition to find smallest
        largest = max(nums[i], largest); // you can also use if condition to find largest
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }

    cout << "Smallest : " << smallest << endl;
    cout << "Largest : " << largest << endl;

    return 0;
}