#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if (m>=75)
    {
      cout<<"Grade : A";
    }else
    if (m>=65 && m<75)
    {
      cout<<"Grade : B";
    }else
    if (m>=55 && m<65)
    {
      cout<<"Grade : C";
    }else
    if (m>=45 && m<55)
    {
      cout<<"Grade : Pass";
    }else if (m<45)
    {
        cout<<"Londa Fail"<<endl;
    }
    
   
    
    
    



    return 0;
}