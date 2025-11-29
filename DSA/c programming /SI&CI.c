#include <stdio.h>
int main(){
    //simple interest 
    int p , r , t ;
    float s1;

    printf("Enter Principle ", "Rate" ,  "Time separated by a space ");
    scanf("%f %f %f", &p , &r , &t);

    s1 = p*r*t/100.0;
    printf("simple interest : %f" , s1);
    return 0;
}