#include <iostream>
using namespace std;
int main() {
   int n=5;
   int i=1;
   while (i<=n){
    //space
    int j=1;
    while(j<=n-i){
        cout<<" ";
        j++;

    }
   //star
   int k=1;
   while (k<=i){
    cout<<" *";
    k++;

   }
   cout<<endl;
   i++;
   }
}