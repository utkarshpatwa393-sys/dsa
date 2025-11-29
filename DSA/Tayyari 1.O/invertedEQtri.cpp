#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int temp = n;
    while (i<=n)
    {
        //space
        int j=0;
        while (j<=i)
        {
          cout<<"  ";
          j++;
        }
        //stars
       int k=1;
        while (k<=2*temp-1)
        {
           cout<<"* ";
            k++;
        }
        temp--;
        i++;
      cout<<endl;
    }
    
         return 0;

}