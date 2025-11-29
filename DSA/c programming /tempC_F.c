#include <stdio.h>
int main(){
    //C--F
    float celcius, fahrenheit;

    printf("Enter temperature into celsius");
    scanf("%f" , &celcius);

    fahrenheit = (9*celcius)/5;

    printf("Temperature in fahrenheit : %.2f\n", fahrenheit);
    return 0;
}