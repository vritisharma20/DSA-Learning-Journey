/*
3. else-if ladder:
            - Used to check multiple conditions sequentially.
            if(condition1){
                // code to be executed if condition1 is true
            } else if(condition2){
                // code to be executed if condition2 is true
            } else {
                // code to be executed if both conditions are false
            }
*/

#include <iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if(marks >= 90){
        cout<<"Grade A"<<endl;
    }else if(marks >= 80 && marks < 90){
        cout<<"Grade B"<<endl;
    }else{
        cout<<"Grade C"<<endl;
    }

    return 0;
}