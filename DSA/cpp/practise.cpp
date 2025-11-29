// pattern no 1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch<< "  ";
//             ch++;

//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern no 2
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;  i<=n; i++ ){
//         char ch = 'A';
//         for(int j=1; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern no 3
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char ch = 'A';
//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch<<" ";
            
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }

// pattern no 4;
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         for(int j=1; j<=n-i+1; j++){
//             cout<<ch;
            
//         ch++; 
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }

// // pattern no 5
// alphabet pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";

//         }
//         for(int l=1; l<=2*i-1; l++){
//             cout<<ch;
//              ch++;
//         } 
//        cout<<endl;
//     }
//     return 0;
// }
//pattern, no 6;
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
    
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++ ){
//             cout<<"i";
//         i=i+1;

//         }
    
//         cout<<endl;
//     }

//     return 0;

     
// }
// print all even no;

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=2;
//     cin>>n;
//     while(i<=n){
//         cout<<i;
//         i=i+2;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int s=0;
//     int i=1;
//     cin>>n;
//     while(n!=0){
//         s= s + n%10;
//         n=n/10;


//     }
//     cout<<"Sum of digit"<<s;
//     return 0;

// }

// check prime 
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