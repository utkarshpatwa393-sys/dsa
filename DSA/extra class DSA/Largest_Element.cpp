#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //initialise
    for (int i = 0; i <n; i++)
    {
     cin>>arr[i];
    }
    //greatest
    int min= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>min)
        {
            min=arr[i];
            
        }
        cout<<endl;
    }
    cout<<min;
    

    return 0;
}