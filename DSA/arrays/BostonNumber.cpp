#include <iostream>
using namespace std;
int sumDigits(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    int sum1 = sumDigits(n); 
    int sum2 = 0;           
    int temp = n;

    
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            sum2 += sumDigits(i);
            temp /= i;
        }
    }

    
    if (temp > 1)
        sum2 += sumDigits(temp);

    
    if (sum1 == sum2)
        cout << 1;
    else
        cout << 0;

    return 0;
}