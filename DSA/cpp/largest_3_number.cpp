#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b || a>c){
        cout<<a;
    }else if(b>c){
        cout<<b;
    }else
    
        cout<<c;
    return 0;
}



// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a;
// 	cin>>a;
// 	int lsf = a;
// 	for(int i = 2; i<=n; i++){
// 		int b;
// 		cin>>b;
// 		if(b>lsf){
// 			lsf = b;
// 		}
// 	}
// 	cout<<lsf;
	
// 	return 0;
// }

// five number
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>b || a>c || a>d || a>e){
        cout<<a;
    }else if(b>c || b>d || b>>e){
        cout<<b;
    }else if(c>d || c>e){
        cout<<c;
    }else if(d>e){
        cout<<d;
    }else 
    cout<<e;
    
    
    return 0;
}
