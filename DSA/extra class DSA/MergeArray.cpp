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

    int m;
    cin>>m;
    int ar[m];
    for (int i = 0; i < m; i++)
    {
      cin>>ar[i];
    }

    int arm[n+m];
    int i=0;
    for (int j= 0; j < n; j++)
    {
       arm[i]=arr[j];
       i++;
    }


    for (int l= 0; l < m; l++)
    {
       arm[i]=ar[l];
       i++;
    }

   sort(arm,arm+(n+m));
    for (int i = 0; i < n+m; i++)
    {
        cout<<arm[i]<<" ";
    }
    

    

    
    return 0;
}