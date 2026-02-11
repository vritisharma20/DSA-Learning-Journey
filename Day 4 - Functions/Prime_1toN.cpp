// WAF to print all prime numbers from 2 to N

#include <iostream>
using namespace std;

// Function to check prime
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to print prime numbers from 2 to N
void printPrimes(int N) {
    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    printPrimes(N);

    return 0;
}
