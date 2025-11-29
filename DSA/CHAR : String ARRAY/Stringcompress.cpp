#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    
    int n=str.size();
    string ans= "";
     int count =1;
    for (int  i = 1; i < n ; i++)
    {
       
        if (str[i]==str[i-1])
        {
            count++;

        }else{
            ans = ans + str[i-1];
           ans= ans + to_string(count);
            count = 1;
        }
        
    }
    ans = ans + str[n-1];
    ans = ans + to_string(count);
    cout<<ans;

    
    return 0;
}