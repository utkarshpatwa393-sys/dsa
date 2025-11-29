#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){ //space
        int j=1;
        while (j<=n-i){
            cout<<" ";
            j++;

        }
        // star
        int k=1;
        while (k<=2*i-1){
            cout<<"*";
            k++;
        }

        int l=n-1;
        while(l<=n-1){
            cout<<"*";
            l++;
    
        }
        


           
        
        cout<<endl;
         i++;
        
    }
    return 0;

}
