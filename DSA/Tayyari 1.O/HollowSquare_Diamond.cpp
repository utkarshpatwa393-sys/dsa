#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;

    for (int i =0; i <n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            cout<<" *";
        }

        for (int j = 0; j<2*i-1; j++)
        {
           cout<<"  ";
        }

        for (int j = 0; j<n-i; j++)
        {
            cout<<" *";
        }


             cout<<endl;
    }
////////////////////////////////////////////////////////////////////////////////////////////////
            
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i; j++)
       {
            cout<<" *";
       }


       for (int j = 0; j<2*temp-1; j++)
        {
           cout<<"  ";
        }


        for (int j = 0; j<i; j++)
        {
            cout<<" *";
        }

        temp--;
       cout<<endl;
  }

        for (int i = 0; i<2*n-1; i++)
        {
             cout<<" *";
        }
        
            return 0;
}