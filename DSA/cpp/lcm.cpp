#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int lcm;
    int maxNum = (N1 > N2) ? N1 : N2;

    while (true) {
        if (maxNum % N1 == 0 && maxNum % N2 == 0) {
            lcm = maxNum;
            break;
        }
        maxNum++;
    }

    cout << lcm << endl;
    return 0;
}