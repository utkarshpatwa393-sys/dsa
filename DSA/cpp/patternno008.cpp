#include <iostream>
using namespace std;
int main(){
    int n=7;
    cin>>n;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        cout<< j;
      }
       //space 
       for(int k=1;  k<=n-i; k++){
       cout<<"*";
5
       }
      cout<<endl;
        
    }
    return 0;

}