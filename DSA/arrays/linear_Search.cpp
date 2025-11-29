#include <iostream>
using namespace std;
bool search(int arr[], int size, int key ){
  for (int i = 0; i <size-1; i++)
  {
    if (arr[i]==key)
    {
      return 1;
    }
     
  }
    return 0;
}

int main(){
  int n;
  cin>>n;
  int arr[5]={1,2,3,4,5};

  cout<<"Enter the key to search : "<<endl;
  int key;
  cin>>key;
  bool found = search(arr,7,key);
  if (found)
  {
   cout<<"key is present";
  }else {
    cout<<"key is absent ";
  }
  
return 0;
}