#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {   //upper 
        int j=1;
        while (j<=i)
        {
          cout<<"* ";
          j++;
        }

        i++;
        cout<<endl;
  }

  // lower
       i=n-1;
       while (i>=1)
       {
            int j=1;
            while (j<=i)
            {
               cout<<"* ";
               j++;
            }
            i--;
            cout<<endl;
       }
    
         return 0;
}