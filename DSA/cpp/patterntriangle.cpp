#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int num=1;
	while(i<=n)
	{//space
	   int j=1;
	   while(j<=n-i){
          cout<<"   ";
		  j++;

	   }
	   //num
	   int k=1;
	   while(k<=i){
	   cout << num <<"   ";
	   k++;
	   num++;

	   }
       int l=1;
       num=num-2;
       while(l<=(i-1)){
        cout<<num<<"   ";
        num--;
        l++;
       }
       num=num+2;
       i++;
       cout<<endl;
    }


	return 0;
}