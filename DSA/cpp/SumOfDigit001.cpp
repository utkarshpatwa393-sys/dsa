// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         sum=sum+n%10;
//         n=n/10;


//     }


//     cout<<"Sum of digit : "<<sum;



//     cout<<endl;
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     while(n!=0){
//         sum=sum+n%10;
//         n=n/10;
//     }
//     cout<<"sum of digit : "<<sum;
//     return 0;

// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while (n!=0)
    {
        sum = sum + n%10;
        n=n/10;
    }
    cout<<"Sum of digit : "<<sum<<endl;
    return 0;
}

