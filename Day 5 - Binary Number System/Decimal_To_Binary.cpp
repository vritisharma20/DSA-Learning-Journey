// Decimal Number System to Binary Number System

// Converting from 1 to 10.

#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {

        int rem = decNum % 2; // getting reminder
        decNum /= 2;          // updating the deciaml number

        ans += (rem * pow); //
        pow *= 10;          // updating the power by multiplying by 10 (pow = pow * 10)

    }
    return ans;
}
int main()
{

    // getting the decimal number into binary from 1 to 10 by uding for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << decToBinary(i) << endl;
    }

    return 0;
}