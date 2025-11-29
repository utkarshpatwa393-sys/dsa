#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int k=3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


   
   
    //1. reverse 0 to n-1
    int i=0;
    int j=n-1;
    while (i<j)
    {
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
    
    //2. reverse 0 to k-1
     i=0;
     j=k-1;

    while (i<j)
    {
      swap(arr[i],arr[j]);
      i++;
      j--;
    }

    //3, revese k to n-1
     i=k;
     j=n-1;
    while (i<j)
    {
      swap(arr[i],arr[j]);
      i++;
      j--;
    }

    //print
     for (int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}

