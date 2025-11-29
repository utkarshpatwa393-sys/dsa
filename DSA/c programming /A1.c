#include <stdio.h>
int main(){
    int s1 , s2 , s3 , s4 , s5;
    float percentage;
    int sum;


    print("Enter marks of 5 subject seprated by a space \n");


    scanf("%d %d %d %d %d", &s1 , &s2 , &s3 , &s4 , &s5);


    sum = s1+s2+s3+s4+s5;
    percentage = (sum/500)*100;

    printf( "\n Total Marks = %d" , sum);
    printf( "\nPercentage = %.2f%%", percentage);

    return 0;

}