#include <iostream>
using namespace std;
int main(){
    int num=5;
    int a = num;

    int *ptr = &num;
    cout<<ptr<<endl;

    //copying a pointer
    int *vptr= ptr;
    cout<<vptr<<endl;


    //important concept
    int i=3;
    int *t=&i;
    cout<<t<<" "<<*t<<endl;;
    // *t = *t + 1;
    t = t + 1;
    cout<<t<<" "<<*t<<endl;
    return 0;

}