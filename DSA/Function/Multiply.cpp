#include <iostream>
using namespace std;
int Multiply(int a, int b){
    
   int s=a*b;
    return s;
}

int main(){
    int x,y;
    cin>>x>>y;
    
    Multiply(x,y);
    
    cout<<(x*y);
    
    return 0;
}