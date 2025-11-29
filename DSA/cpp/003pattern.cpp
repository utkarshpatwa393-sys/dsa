// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
        // cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while (j<=n-i+1){
//             cout<<"* ";
//             j++;
             
//         }
//         i++;
//        cout<<endl;

        
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j < n-i+1; j++)
        {
           cout<<" *";
        }
        cout<<endl;
    }
    
    return 0;
}