// #include <iostream>
// using namespace std;
// bool iseven(int a){
//     int n;
//     cin>>n;
//     if (n%2==0)
//     {
//         cout<<"even";
//     }else
//         cout<<"odd";
    
// }

// int main(){
//     int x;
//     iseven(x);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void iseven(int a){
    
//     if (a%2==0)
//     {
//         cout<<"even"<<endl;
//     }else
//         cout<<"odd"<<endl;
    
// }
// int main(){
//     int x;
//     cin>>x;
//     cout<<"Please enter the number :";
//     iseven(x);
    
//     return 0;
// }


//bool;
#include <iostream>
using namespace std;
bool iseven(int a){
    //task
    //odd

    
    
      if (a&1)
    {
        return 0 ;
    }else { //even
        return 1;
    }

    }
    


int main(){
    int x;
    cin>>x;
    cout<<"please enter the number :"<<endl;
   if (iseven(x)) {
        cout << x << " is even" << endl;
    } else {
        cout << x << " is odd" << endl;
    }
    
    return 0;
}