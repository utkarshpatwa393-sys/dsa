// #include <iostream>
// using namespace std;

// int main() {
//     int n;
    
//     cin >> n;

//     // Top Half
//     for (int i = 0; i < n; i++) {
//         // Print spaces
//         for (int j = 0; j < i; j++) {
//             cout << "  ";
//         }
//         // Print stars
//         for (int j = 0; j < 2 * (n - i) - 1; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     // Bottom Half
//     for (int i = n - 2; i >= 0; i--) {
//         // Print spaces
//         for (int j = 0; j < i; j++) {
//             cout << "  ";
//         }
//         // Print stars
//         for (int j = 0; j < 2 * (n - i) - 1; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }




#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //top half
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" ";
        }
        
        for (int k = 1; k<=n-i+1; k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    // bottom half
    for (int i = 1; i <=n; i++)
    {
      for (int j = 0; j <=n-i; j++)
      {
        cout<<" ";
      }
      
      for (int k = 1; k <= i; k++)
      {
        cout<<" *";
      }
     cout<<endl;
    }
    
    
    return 0;
}