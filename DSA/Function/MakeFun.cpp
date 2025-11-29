// #include <iostream>
// using namespace std;
// int sumoftwo(int a , int b){
// int x = a+b;

// return x;
// }

// int main(){
//     int p,q;
//     cin>>p>>q;
    
//     cout<<sumoftwo(p,q);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int s=1;
//     for(int i=1; i<=n; i++){
//         s=s*i;
//     }
//     return s;
// }

// int ncr (int n , int r){
//     int N = factorial(n);
//     int R = factorial (r);
//     int NR = factorial (n-r);

//     int ncr = N/(R*NR);

//     cout<<ncr;

//     return 0;
// }


// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     ncr(a,b);


//     return 0;
// }


#include <iostream>
using namespace std;
int factorial(int a , int b){
    int n;
    int s;
    cin>>s;
    for (int i = 0; i <=n ; i++)
    {
        s=s*1;
    }
    
    return s;
}

int ncr(int n , int r){
    
    int  N = factorial (n) ;
    int  R = factorial (r) ;
    int NR = factorial (n-r) ;

    int ncr= N/R*NR ;

    cout<<ncr;
    return 0;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    ncr(a,b);


    return 0;
}
