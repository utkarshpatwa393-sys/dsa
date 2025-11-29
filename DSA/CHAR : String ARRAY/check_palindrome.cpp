#include <iostream>
using namespace std;

bool check(string str) {
    int s = 0, e = str.length() - 1;

    while (s < e) {
        if (str[s] != str[e]) 
        return false;
        s++; 
        e--;
    }
    return true;
}

int main() {
    string str;
    cin >> str;

    if (check(str)) 
        cout << "it is a palindrome";
    
    else 
    cout << "it is not a palindrome";
    
    return 0;
}




