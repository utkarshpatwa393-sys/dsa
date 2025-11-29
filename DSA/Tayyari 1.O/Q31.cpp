#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while (i<=n)
    {
        int j=n;
        while (j>=1)
        {
          if (i==j || j==i)
          {
            cout<<"* ";
          }else{
              cout<<j<<" ";
          }
             j--;
     }
        i++;
       cout<<endl;
    }
    
    return 0;
}