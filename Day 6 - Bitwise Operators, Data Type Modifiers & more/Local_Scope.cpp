// ================= 1. LOCAL SCOPE =================

// A variable declared inside a function
// It can be used only inside that function.

// void func() {
//     int x = 10;   // Local variable
//     cout << x;    // Accessible here
// }

// cout << x;   // ERROR (not accessible outside function)
// ~~EXAMPLE - 

#include <iostream>
using namespace std;
int main(){

    for(int i=1;i<10;i++){ // i has local scope to this loop
        cout<<i<<" "; // Accessible here

    }

    // cout<<i<<endl; // ERROR (i is not accessible outside the loop)

}