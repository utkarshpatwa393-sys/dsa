// // by char array
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main(){
 
//    char str[7];
//    cin>>str;

//    int s= 0;
//    int e= strlen(str)-1;
//    while (s<e)
//    {
//      swap(str[s], str[e]);
//      s++;
//      e--;

//    }
//    cout<<str<<endl;
   
//   return 0;
// }


//by string
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str = "utkarsh patwa";
  reverse(str.begin(), str.end());
  cout<<str<<endl;
  return 0 ; 
}