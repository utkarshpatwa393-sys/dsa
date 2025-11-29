#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //rotate
    // int k=3;
    // while (k>0)
    // {
    //     int temp=arr[n-1];
    //     for (int i=n-1; i>0; i--)
    //     {
    //         arr[i]=arr[n-1];
    //     }
    //     arr[0]=temp;
    //     }

        //reverse
        int i;
        int j;
        while (i<j)
        {
           swap(arr[i], arr[n-1]);
           i++;
           j--;
        }
        
        //printing
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}