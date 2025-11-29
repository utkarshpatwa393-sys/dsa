#include<iostream>
#include<cstring>
#include <string>

using namespace std;
int stringCompare(char str1[], char str2[]){
	int i = 0;
	int j = 0;
	while (str1[i]!='\0' && str2[j]!='\0')
	{
		if (str1[i]>str2[j])
		{
			return 1;
		}
		else if(str1[i]< str2[j]){
			return -1;
		}
		else{
			i++;
			j++;
		}
		
	}
	if(str1[i]=='\0' && str2[j]=='\0'){
		return 0;
	}
	else if(str1[i]=='\0'){
		return -1;
	}else{
		return 1;
	}
}

    int main(){
        char str1[]={'a','a','a'};
        char str2[];{'a','a','b'};
        
        stringCompare(str1,str2);

    return 0;
}
