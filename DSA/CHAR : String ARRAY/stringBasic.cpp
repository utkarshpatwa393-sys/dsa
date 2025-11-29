// #include <iostream>
// using namespace std;
// int main(){
//     char str[100];
//     strlen(str);
//     cin.getline(str , 100 , '$'); // $ = delimiter which stop the printing character

//     cout<<"output :"<<" "<<str<<endl;
//     cout<<strlen(str)<<end l;
//     return 0;

// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str1 = "utkarsh patwa"; //dynamic in nature == runtime pe resize hote hai
//     string str2 = "utkarsh";
//     // string str3 = str1 + str2; // concatintion
//     cout<<(str1<str2); //lexographically means dictionary wise 
//     // cout<< (str1 == str2)<< " " <<endl;
//     cout<< str2.length();
//     return 0 ;
// }



#include <iostream>
#include <string>
using namespace std;
int main(){

    string str= "utkarsh patwa";
    for (int i = 0; i < str.length(); i++)
    {
      cout<<str[i]<<" ";
    }
    
    return 0;
}