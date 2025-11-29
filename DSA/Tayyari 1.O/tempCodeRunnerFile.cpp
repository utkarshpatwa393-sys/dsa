#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for (int i = 0; i <=n; i++)
    {   
        //stars
        for (int j= 1; j<=n-i; j++)
        {
           cout<<"* ";
        }

        // middle space
        for (int j = 1;  j <=2*i-1; j++)
        {
           cout<<"  ";
        }
        
        //stars

         for (int j= 1; j<=n-i; j++)
        {
           if (j<n)
        {
            cout<<"* ";
        }
        }

        cout<<endl;
    }
        return 0;
}

