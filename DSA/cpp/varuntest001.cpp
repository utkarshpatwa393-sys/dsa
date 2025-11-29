#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // left star
    for (int i = 0; i <n; i++)
    {
        for (int j = 1; j<=n-i; j++)
        {
           cout<<" *";
        }
      //space
   for (int j= 1; j<=2*i-1; j++)
    {
      cout<<"  ";
    }
    // right stars
    for (int j = 1; j <=n-i; j++)
    {
        if (j<n)
        {
            cout<<" *";
        }
        
        
    }
    cout<<endl;
    
    }    

    return 0;
}