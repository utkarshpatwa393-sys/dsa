#include <iostream>
#include <math.h>
using namespace std;
int main(){
//angstrom no- 153 == 1^3 + 5^3 + 3^3
    int n;
    cin>>n;

    int sum=0;
    int originaln=n;
    while (n>0)
    {
     int lastdigit= n%10;
     sum+= pow(lastdigit,3);
     n=n/10;
    }
    if (sum == originaln)
    {
       cout<<"Angstrome no "<<endl;
    }
    else
    {
        cout<<" not Angstrome no "<<endl;
    }
    

    return 0;
}