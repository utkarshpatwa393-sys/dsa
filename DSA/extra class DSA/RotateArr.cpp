#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //initialize
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    //rotate code
    int temp=arr[n-1];
    //printing
    for (int i=n-1; i>0 ; i--)
    {
        arr[i]=arr[i-1];
        
    }
    arr[0]=temp;
    //cout
    for (int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    
    return 0;
}


