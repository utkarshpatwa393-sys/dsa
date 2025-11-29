#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to print first N prime numbers
void printPrimes(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "First " << n << " prime numbers are: ";
    printPrimes(n);

    return 0;
}