#include <iostream>
using namespace std;
int main(){
    int a[]={1,3,4,1,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        ans= ans^a[i];
    }
    
   
        cout<<ans;
    
        cout<<endl;



    return 0;
}