// WAF to print nth Fibonacci number

#include <iostream>
using namespace std;

// Function to return nth Fibonacci number
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Nth Fibonacci number is: " << fibonacci(n);

    return 0;
}
