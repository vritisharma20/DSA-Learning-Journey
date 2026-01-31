// Sum of all Odd numbers from 1 to n using a for loop

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int sum = 0;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }

    cout<< "Sum of odd numbers : "<<sum<<endl;

    return 0;
}