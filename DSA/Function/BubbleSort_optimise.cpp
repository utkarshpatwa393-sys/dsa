#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]; //arr[]={3,1,2,5,4}
    for(int i=0; i<n; i++){
        int j;
        cin>>j;
        
    }

    for(int i=0; i<n; i++){
        bool isSwap = false;
        for(int j=0; j<=n-2; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return 0;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}