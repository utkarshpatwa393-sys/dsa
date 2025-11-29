// *****
// ****
// ***
// **
// *
// #include <iostream>
// using namespace std;
// int main(){

//   int n;
//   cin>>n;

//   for (int i = 1; i <=n; i++)
//   {
//     for (int j = 1; j<=n-i+1; j++)
//     {
//       cout<<" *";
//     }
//     cout<<endl;
//   }

//   return 0;
// }

  
// }
//hollow square

// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i==0||i==n-1||j==0||j==n-1){
//         cout<<"*";
//       }
//       else {
//       cout<<" ";
//     }
//     } 
    
//     cout<<endl;
//   }
// }


// * * * * *
// * *   * *
// *       *
// * *   * *
// * * * * *

// #include <iostream>
// using namespace std;
// int main(){

//   int n;
//   cin>>n;
//   for (int i = 0; i <= n; i++)
//   {
//    for (int j = 0; j< n; j++)
//    {
//    if (i==0 || i==n-1 || j==0 || j==n-1)
//    {
//     cout<<"*";

//    }else if ( i == 0 || i=2*n-1)
//    {
//     cout<<" ";
//    }
//    else 
//    {
//     cout<<" ";
//    }
   
//    }
//    cout<<endl;
//   }
//     return 0;
// }

// hollow pyramid diamond
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    //leading space
    while (i <= n) {
        int j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }

        int l = 1;
        int k = 2 * i - 1; //spaces centre
        while (l <= k) {
            if (l == 1 || l == k)
                cout << "*";
            else
                cout << " ";
            l++;
        }

        cout << endl;
        i++;
    }
    //reverse 
    i = n - 1;
    while (i >= 1) {
        int j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }

        int l = 1;
        int k = 2 * i - 1;
        while (l <= k) {
            if (l == 1 || l == k)
                cout << "*";
            else
                cout << " ";
            l++;
        }

        cout << endl;
        i--;
    }

    return 0;
}

  