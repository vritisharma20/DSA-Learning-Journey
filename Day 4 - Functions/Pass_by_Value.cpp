/*
        ~~~ Pass by Value ~~~

        Pass by Value:
            - A copy of the argument is passed to the function
            - Modifying the parameter inside the function does NOT affect the original argument
            - Used for primitive data types (int, float, char, etc.)

        Example:
            void increment(int x) {
                x++; // modifies the local copy of x, not the original variable
            }   
            int main() {
                int num = 5;
                increment(num);
                cout << num; // Output: 5 (original variable is unchanged)
                return 0;
            }

        Benefits of Pass by Value:
            - Simplicity: Easy to understand and use
            - Safety: No risk of unintended side effects on the original data
            - Encapsulation: Function works with its own copy of data, promoting modularity

        Limitations of Pass by Value:
            - Performance: Can be inefficient for large data structures (e.g., structs, classes)    
            - No modification: Cannot change the original data from within the function
*/

#include <iostream>
using namespace std;

int sum(int a, int b){
    a = a + 10; // modifies the local copy of a, not the original variable
    b = b + 10; // modifies the local copy of b, not the original variable
    return a + b; // returns the sum of a and b
}
int main(){
    int a = 5 , b = 4;
    cout<<sum(a,b)<<endl;

    cout<<a<<" "<<b<<endl; // Output: 5 4 (original variables are unchanged)
    return 0;
}