#include <stdio.h>

float conv(float raio, float altura){
    return (3.1414592*(raio*raio)*altura);
}

int main (){
    float raio ,altura, v;

    printf("Digite o Raio e a Altura:");
    scanf("%f %f",&raio , &altura);

    v = conv(raio , altura);

    printf("Volume: %.2f",v);

return 0;
}