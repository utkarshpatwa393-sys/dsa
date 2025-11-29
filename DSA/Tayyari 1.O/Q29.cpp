#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int i = 1;
    //leading space
    while (i <= n) {
        int j = 1;
        while (j <= n - i) {
            cout <<"  ";
            j++;
        }

        int l = 1;
        int k = 2 * i - 1; //spaces centre
        while (l <= k) {
            if (l == 1 || l == k)
                cout<<i<<" ";
            else
                cout<<"0 ";
            l++;
        }

        cout<<endl;
        i++;
    }
    return 0;
}