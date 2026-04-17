#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)         // 0 and 1 are not prime numbers
        return false;

    for (int i = 2; i * i <= n; i++) { // Check for factors from 2 to sqrt(n)
        if (n % i == 0)      // If n is divisible by any number other than 1 and itself, it is not prime
            return false;
    }
    return true;    // If no factors are found, n is prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    return 0;
}