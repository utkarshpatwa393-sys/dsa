#include <iostream>
using namespace std;
int main(){
    int nums[] = {1,45,67,89,-45,87,-1,-50};
    int size = 8;
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        //min\max
        if(nums[i]< smallest)
        smallest = min(nums[i], smallest);

    }
    cout<<"smallest = "<<smallest<<endl;
    return 0;

    
}