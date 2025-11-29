#include <iostream>
using namespace std;
void increment(int a){
    cout<<"Inside increment Function before increment: "<<a<<endl;
    a++;
    cout<<"Inside incremrnt Function after increment :"<<endl;

}

int main(){
    int a=0;
    cout<<"Inside increment Function before increment: "<<a<<endl;
    increment (a);
    cout<<"Inside incremrnt Function after increment :"<<endl;
    return 0;
}