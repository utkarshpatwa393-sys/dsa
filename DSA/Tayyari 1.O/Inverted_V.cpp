// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for (int i = 0; i <=n; i++)
//     {   
//         //stars
//         for (int j= 1; j<=n-i; j++)
//         {
//            cout<<"* ";
//         }

//         // middle space
//         for (int j = 1;  j <=2*i-1; j++)
//         {
//            cout<<"  ";
//         }
        
//         //stars

//          for (int j= 1; j<=n-i; j++)
//         {
//            if (j<n)
//         {
//             cout<<"* ";
//         }
//         }

//         cout<<endl;
//     }
//         return 0;
// }


//monu method 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    int space = -1;
    int star = n;
    // star
    
    while (row<=n)
    {
        int i=1;
        while (i<=star)
        {
           cout<<"* ";
             i++;
        }
        
       
    
    // space 
    int j=1;
    while (j<=space)
    {
      cout<<"  ";
      j++;
    }
    
    //star
    int k=1;
    if(row==1){
        k=2;
}
    while (k<=star)
    {
        cout<<"* ";
        k++;
    }
    
    //next line ki prep
    star--;
    space = space +2;
    row++;
    cout<<endl;
}
    return 0;
}