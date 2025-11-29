#include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<< num << endl;

    cout<<"address of num"<<&num<<" "<<endl;

    int *ptr=&num;
    
    cout<<"address of num"<<ptr<<" "<<endl;
    cout<<"value is"<<*ptr<<" "<<endl;
    ptr++;

    int x=10;
    int *ptr = &x;
    cout<<&x<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;


    return 0;
}