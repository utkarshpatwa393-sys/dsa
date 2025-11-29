// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum;
//     sum = 0;
//     sum = n/10;
     
//     for (int i = 1; i < n; i++)
//     {
//         for (int  j = 0; i < j; j++)
//         {
//            cout<<sum;
//         }
        
//     }
    
// }


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    //print star
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <=n-i; j++)
      {
      cout<<" *";
     
      }
      cout<<endl;
       i=i+1;
    }
    return 0 ;
    
}
