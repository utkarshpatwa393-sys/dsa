#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while (i<=n)
        //space
    {
       int j=1;
       while (j<=2*i)
       {
         cout<<"  ";
         j++;
       }
       //star
       int k=1;
       while (k<=n-i)
       {
        cout<<"* ";
        k++;
       }
       i++;
       cout<<endl;
       
    }
     return 0;
}