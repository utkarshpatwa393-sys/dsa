#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
       cin>>a[i];
    }

    int key;
    cin>>key;
    while(key<n)
    {
       cout<<a[key]<<" ";
       key++;
    }

    for (int i=0; i<key-2; i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}