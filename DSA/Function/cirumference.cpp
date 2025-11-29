#include <iostream>
using namespace std;
float circumference(int r){
    //2 * 3.14 * r
    int s= 2 * 3.14 * r;
    return s;
}

int main(){
    int x;
    cin>>x;
   float g = circumference(x);
    cout<<g<<endl;



    return 0;
}
