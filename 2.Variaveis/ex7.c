#include <stdio.h>
#include <math.h>

int main(){ 
    float nota1, nota2, nota3, ponderada, total ;

printf("Digite suas 3 notas:");
scanf("%f %f %f", &nota1 , &nota2, &nota3 );

ponderada = (nota1 + nota2 +(nota3*2))/3;

if(ponderada >= 7 ){
    printf("APROVADO");
}else{
    printf("REPROVADO");
}



    return 0 ;
}