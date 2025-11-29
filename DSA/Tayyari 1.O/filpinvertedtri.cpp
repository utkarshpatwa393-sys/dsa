#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        //spaces
        int j=0;
        while (j<=i-1)
        {
          cout<<"  ";
          j++;
        }
        //star
        int k=1;
        while (k<=n-i+1)
        {
           cout<<" *";
           k++;
        }
         i++;
        cout<<endl;
    }
        return 0;
}