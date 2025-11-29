// array is the collection of value of similar datatype.
// continous memory location
// int arr [] denote size
// note : array globally -- output 0 

#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[5] = {2,67,54,2,1};
    int n = 5;

    int mx = INT_MIN; //INT_MIN= -2^31
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx)
        {
           mx=arr[i];
        }
        
    }
    cout<<"largest number is : "<< mx << endl;
    return 0;




}