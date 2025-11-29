#include <iostream>
using namespace std;

void printSeries(int N1, int N2) {
    int count = 0;   // how many valid terms printed
    int n = 1;       // starting value for n

    while (count < N1) {
        int term = 3 * n + 2;
        if (term % N2 != 0) {   // skip if divisible by N2
            cout << term << " ";
            count++;
        }
        n++;
    }
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    printSeries(N1, N2);

    return 0;
}