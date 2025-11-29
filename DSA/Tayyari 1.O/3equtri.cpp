#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int u=1;
    int i=1;
    while (i<=n)
    {
       //space 
       int j=1;
       while (j<=n-i)
       {
         cout<<"  ";
         j++;
       }
       //star
       int k=1;
       while (k<=2*i-1)
       {
         cout<<u<<"\t ";
         k=k+1;
         u++;
       }
       i++;
       cout<<endl;
       
    }
    
return 0;
}