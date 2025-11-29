// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=2;
//     cin>>n;
//     while(i<n){
//         if(n%i == 0){
//        cout<<"Not a prime number";
//        break;
//         }
//           i=i+1;

//     }
//     if( i== n){
//         cout<<"Prime Number";

//     }
//       cout<<endl;
//       return 0;
      
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            cout << "Not Prime";
            return 0;
        }
        i++;
    }

    if (n > 1)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}