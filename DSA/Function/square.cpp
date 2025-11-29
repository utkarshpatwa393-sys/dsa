// #include <iostream>
// using namespace std;
// int main(){

//     int a,b ;
//     cin>>a>>b;
    
//     int ans = 1 ;
//     for (int i = 1; i <=b; i++)
//     {
//         ans = ans*a;
//     }

//         cout<<"answer is"<<ans<<endl;

//          return 0;
//     }

//bulky code so use function;

#include <iostream>
using namespace std;
int Power(int a ,int b){
    int ans = 1;
    for (int i = 1; i <=b; i++)
    {
       ans = ans * a;
    }
    return ans;
    
}
int main(){
    int x,y;
    cin>>x>>y;
    int answer = Power(x,y);

    cout<<"answer is"<<answer<<endl;
    return 0;
}