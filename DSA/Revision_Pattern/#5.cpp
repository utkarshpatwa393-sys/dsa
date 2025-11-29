#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int value=1;
    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j<=i; j++)
       {
        int value=i;
        cout<<i;
        value=value+1;
       
        
       }
       
       cout<<endl;
    }
    
    return 0;
}