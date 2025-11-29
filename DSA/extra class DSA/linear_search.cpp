#include <iostream>
using namespace std;
int main(){
    int arr[5]= {12,34,5,634,78};
    int n= sizeof(arr)/sizeof(int);
    int key =12;
    int i=0;
    while (i<n)
    {
       if (arr[i]==key)
       {
        cout<<i;
        return 0;
       }
       i++;
       
    }
    cout<<-1;
    


    return 0;
}