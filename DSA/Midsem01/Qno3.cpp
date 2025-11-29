#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
       if (i == 0)
       {
        cout<<"**"<<endl;
       }else if (i == 1)
       {
        cout<<"*****"<<endl;

       }else if (i == 2)
       {
       cout<<"***"<<endl;
       }else if (i == 3)
       {
       cout<<"******"<<endl;
       }
       
       
       cout<<endl;
       
       
    }
    
    return 0;
}





