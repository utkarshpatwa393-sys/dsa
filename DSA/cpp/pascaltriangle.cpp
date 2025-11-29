#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while (i<=n)
    { int j=1;
        int s=1;
        while (j<=i)
        { cout<<s<< "  ";
            s=s*(i-j)/j;
            j++;

         }
        i++;
        cout<<endl;

     

    }
    return 0;
    
}