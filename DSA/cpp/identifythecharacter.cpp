#include <iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cin>>ch;
    if(ch>='A' and ch<='Z'){
        cout<<"Capital letter"<<endl;
    }else  if (ch>='a' and ch<='z'){
        cout<<"small letter"<<endl;

    }else if (ch>='0' and ch<='9'){
        cout<<"digit"<<endl;

    }else {
        cout<<"special char"<<endl;
    }



return 0;

}