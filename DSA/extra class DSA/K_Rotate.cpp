#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    // int n = sizeof(a)/sizeof(int);
    //initialize 
    for (int i = 0; i <n; i++)
    {
       cin>>a[i];
    }
    // condition
    int key;
    cin>>key;
    while(key<n)
    {
       cout<<a[key]<<" ";
       key++;
    }

    for (int i=0; i<key-2; i++)
    { //print
       cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     //initialise
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     //condition
//     int k=3;
//     while (k>0)
//     {
//         int temp= arr[n-1];
//     for (int i =n-1; i > 0; i--)
//     {
//        arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
     
//     }
//     //printing
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
    
    
//     return 0;
// }