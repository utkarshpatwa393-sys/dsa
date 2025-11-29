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
    // insertion sort algo-- not  swap just shift the elements like CARDS.
    // agar chota hai to left me shift and bada ho to right me shift. Total Rounds are n-1. kihska ke aage kar do aur shift kar do.
    for (int i = 0; i < n; i++){
        int temp = arr[i];
        int j= i-1;
        for (int j = i-1; j>=0; j--)
        {
         if (arr[j]> temp)
         { //shift
            arr[j+1] = arr[j];
         } else { 
            //ruk jao
            break;
         }
         
        }
        arr[j+1]=temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
    return 0;
}