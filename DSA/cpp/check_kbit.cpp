#include <iostream>
using namespace std;
int main(){
    int n=42;

    int k=3;
    //ternary operator
    n>>k&1 ? cout<<"True" : cout<<"False";

    return 0;

}