#include <stdio.h>

float conv(float celsius){
    return (celsius - 32.0) * (5.0/9.0);
}
int main (){
    float fahr , celsius;

    printf("Digite em Fahrenheit:");
    scanf("%f",&fahr);

    celsius = conv(fahr);

    printf("%.2f",celsius);

return 0;
}