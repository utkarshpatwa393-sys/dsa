#include <iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    cin>>n;
    while(i<=n){
        if (n%2==0)
        {
            cout<<"even";
            break;

        }else if (n%2!=0)
        {
            cout<<"Odd";
            break;
        }
    }
    cout<<endl;
    return 0;
}