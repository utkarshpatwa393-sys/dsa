// #include <iostream>
// using namespace std;
// int main(){
//      char ch ='A' ;
//     cout<<ch<<" "<<endl;
//     int *ptr=(int*)&ch;
//     cout<<sizeof(*ptr)<<endl;
//     cout<<"address :"<<*ptr<<" "<<endl;
//     cout<<ptr <<" "<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){ 

    int x=516;
    char*ptr =( char*)&x;
    cout<< (int)*ptr<<endl;
    return 0;
}
