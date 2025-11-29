#include <iostream>
using namespace std;
 void isprime(int N){
    int n=2;
    while (n<=N)
    {
       bool isprime = true;
       for (int i = 2; i <=n-1; i++)
       {
            if (n%i==0)
            {
                isprime=false;
                break;
            }
            
       }
       if (isprime)
       {
            cout<<n<<" ";

       }
       n++;
       
    }
    
    }

    int main(){
        int N=30;
        isprime(N);
        return 0;
    
 }
