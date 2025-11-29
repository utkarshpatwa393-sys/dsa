// #include <iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int i=1;
//     while (i<=n){
//         int j=1;
//         while(j<=i) {
//         cout<<" ";
//         j++;
//         }
//         int k=1;
//         while (k<=n-i+1){
//         cout<<" *";
//         k++;

//         }
//         i++;
//         cout<<endl;
        
// }
// return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j<=i; j++)
       {
        cout<<" ";
       }
       
       for (int k = 1; k <=n-i+1; k++)
       {
        cout<<" *";
       }
       cout<<endl;
    }
    
         return 0;
}