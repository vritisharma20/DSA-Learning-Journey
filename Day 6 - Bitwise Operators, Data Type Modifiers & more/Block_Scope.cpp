// ================= 3. BLOCK SCOPE =================

// Variables declared inside {} braces
// Accessible only within that block.

// int main() {
//     if (true) {
//         int z = 30;   // Block scope
//         cout << z;    // Accessible here
//     }

    // cout << z;   // ERROR (out of scope)
//}
// ~~EXAMPLE -

#include <iostream>
using namespace std;
int main(){

    {
        int x = 10; // x has block scope to this block
    }

    // cout<<x<<endl; // ERROR (x is not accessible outside the block)
}
