#include <iostream>
using namespace std;
void isprime(int a){
    
    for (int  i = 2; i < a ; i++)
    {
       if (a%2==0)
       {
        cout<<"Not Prime";
        break;
       }
       else{
        cout<<"prime";
        break;
       }
       
    }
    
}

int main(){
    int x;
    cin>>x;
    isprime(x);
    cout<<x<<endl;

    return 0;
}




