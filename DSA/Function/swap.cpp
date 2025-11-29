// #include <iostream>
// using namespace std;
// void swap(int a, int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<" "<<b;

// }

// int main(){
//     int x,y;
//     cin>>x>>y;
//     swap(x,y);

//     return 0;
// }

//method 2
#include <iostream>
using namespace std;
void myswap(int&a , int&b){
    swap(a,b);
}
int main(){
    int x=10;
    int y=5;
    swap(x,y);
    cout<<x<<" "<<y;


    return 0;

}