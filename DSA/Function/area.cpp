#include <iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int main(){
    int x;
    cin>>x;
    float g=area(x);
    cout<<g<<endl;
    
    return 0;
}