#include  <iostream>
using namespace std;
int main(){

    int a[]={1,3,5,6,7,88};
    int n = sizeof(a)/sizeof(int);
    cout<<&a[0]<<endl;
    int *xarr= a;
    cout<<xarr<<endl;
    cout<<&a[1]<<endl;
    cout<<&a[2]<<endl;


    for (int i = 0; i <n; i++)
    {
       cout<<&a[i]<< " "<<a+1<<" "<<"value : "<<a[i]<<" " << (a+i)<<endl;
    }
    

    return 0;
}