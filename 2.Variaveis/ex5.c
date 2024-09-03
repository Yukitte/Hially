#include <stdio.h>
#include <math.h>

int main (){
    int num1;

printf("Digite um numero:");
scanf("%d",&num1);

 if(num1 == 5 || num1 == 200 ||num1 == 400){
    printf("O numero é 5, 200 ou 400\n");

}else if(num1 >= 500 && num1 <=1000) {
    printf("O numero está entre 500 e 1000");

}else {
    printf("Está fora dos Requisitos");
}

    return 0;
}