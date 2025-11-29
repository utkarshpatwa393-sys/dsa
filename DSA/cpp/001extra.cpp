#include <iostream>
using namespace std;

// Function to calculate nCr (Combination)
int nCr(int n, int r) {
    int res = 1;
    if (r > n - r) r = n - r; // Use symmetry property
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int n = 6; // number of rows

    for (int i = 0; i < n; i++) {
        // Print spaces to align like a pyramid
        for (int s = 0; s < n - i; s++) {
            cout <<"";
        }

        // Print numbers using nCr
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) <<"   ";
        }
        cout << endl;
    }

    return 0;
}
