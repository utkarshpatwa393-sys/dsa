#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //user read array
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    // print the array
    int s=0;
    int e=n-1;
    while (s<e)
    {
      swap(arr[s],arr[e]);
      s++;
      e--;
    }
    //cout the array
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//ulta print is not the reverse

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i <n; i++)
//     {
//        cin>>arr[i];
//     }
//     cout<<endl;

//     for (int i =n-1; i>=0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }