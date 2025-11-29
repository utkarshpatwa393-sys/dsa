// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {    //leading space
//         int j=1;
//         while (j<=n-i)
//         {
//           cout<<"  ";
//           j++;
//         }
//             int l=1;
//         int k=1;
//         while(k<=2*i-1){
           
//             if ( )
//             {
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
            
//             k++;
//         }
//         i++;
//         cout<<endl;
//     }
    

//     return 0;
// }


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

