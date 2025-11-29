#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,3};
    int n = sizeof(a)/sizeof(int);
    int ans=0;
    //XOR all elements and XOR with i
    for (int i = 0; i < n; i++)
    {
        ans= ans^a[i];
    }

    for (int i = 0; i < n; i++)
    {
       ans = ans^i;
    }
    
        cout<<ans;

         return 0;

}