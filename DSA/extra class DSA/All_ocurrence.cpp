#include <iostream>
using namespace std;
int main(){
    int arr[6]={10,20,30,20,10,20};
    int n= sizeof(arr)/sizeof(int);
    int key=20;
    int i;

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