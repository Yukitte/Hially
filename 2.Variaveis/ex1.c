/*Escreva um algoritmo que leia um número e imprima a 
raiz quadrada do número caso ele seja positivo ou igual
 a zero e o quadrado do número caso ele seja negativo.*/
#include <stdio.h>
#include <math.h>

int main(){ 
    double numero,resultado;

printf("Digite um numero:");
scanf("%lf",&numero);

//se verdadeiro calcular raiz quadrada
if(numero >= 0){
    resultado = sqrt(numero);

printf("\n A raiz quadrada é :%.3lf",resultado);

//se falso calcular o quadrado
}else{
    resultado= pow(numero,2);

    printf("\nO quadrado do numero é :%.3lf",resultado);
}

    return 0;
}