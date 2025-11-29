#include <iostream>
using namespace std;
int main(){
    int n;

    cin>>n;
    int arr[n];
    int n = sizeof(arr)/sizeof(int);
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;

}