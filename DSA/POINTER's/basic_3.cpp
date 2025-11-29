#include <iostream>
using namespace std;
int main(){
    int x=8;
    int *xptr= &x;
    cout<<x<<endl;
    cout<<"Address : "<<xptr<<endl;
    xptr++;
    cout<<xptr;



    return 0;
}