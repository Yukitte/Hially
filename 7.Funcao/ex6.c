#include <stdio.h>
#include <math.h>

float conv(float altura , int peso){
    float altMet = altura /100;
    return (peso/pow(altura,2));
}

int main (){
    float altura, imc;
    int peso;

    printf("Digite o peso ");
    scanf("%d",&peso);

    printf("Digite a Altura ");
    scanf("%f",&altura);

    imc = conv(altura,peso);

    printf("imc: %.2f",imc);

return 0;
}
