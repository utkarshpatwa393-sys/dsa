// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int temp = n;
//     for (int i = 1; i <=n; i++)
//     {
//        for (int j = 1; j <= i ; j++)
//        {
//             cout<<" *";
//        }

//        for (int j = 1; j <=2*temp-1; j++)
//        {
//           cout<<"  ";
          
//        }

//        for (int j = 1; j <= i ; j++)
//        {
//             cout<<" *";
//        }

       
//        temp--;
//         cout<<endl;
//     }


//     for (int i = 0; i<=2*n; i++)
//         {
//              cout<<" *";
//         }
        
//         return 0;

// }

#include <iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int row=1;
     int star = 1;
     int space =2*n-3;
     while (row<=n)
     {
          //star
          int i=1;
          while (i<=row)
          {
              cout<<"* ";
              i++;
          }
          
          //space 
          int j=1;
          while (j<=space)
          {
               cout<<"  ";
               j++;
               
          }
          
          //star
          int k=1;
          if (row == n)
          {
               k=2;
          }
          
          while (k<=row)
          {
              cout<<"* ";
              k++;
          }
          
          
          //next row ki prepration
          row++;
          star++;
          space= space - 2;
          cout<<endl;
     }
     
     return 0;

}