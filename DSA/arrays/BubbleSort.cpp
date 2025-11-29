// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[]={20,30,50,40,10};
//     int n=5;
//     for(int j=0;j<=n-2;j++)
//     {
//         for(int i=0;i<=n-2;i++)
//         {
//             if(a[i]>a[i+1])
//             {
//                 swap(a[i],a[i+1]);
//             }

//         }
//     }
//     for(int i=0;i<=n-1;i++)
//     {
//         cout<<a[i];
    
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//       int n;
//       cin>>n;
//     int arr[n];
//     // arr [3,1,2,5,4]

//     for(int i = 0; i<n; i++){
//             int j;
//             cin>>j;
//             arr[i]=j;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;

// }


// 3 three ///////

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[5] = {5,4,3,2,1};
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort algorithem

    for (int i = 0; i < n; i++){
        for (int j = 0; j <n-1; j++)
        {
           if (arr[j]>arr[j+1])
           {
            swap(arr[j], arr[j+1]);
           }
           
        }
    }
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
  
    return 0;
    
}